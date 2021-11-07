#include "file.h"

static file_t   *file_new(void);
void            file_free(file_t *file);
file_t          *file_create(char *filename);
static int      file_close(file_t *file);
file_t          *file_read(char *filename);
char            *file_ext(char *filename);
void            file_print(file_t *file, char *format, ...);
static int      file_is_endline(file_t *file);
static char     *file_get_nextline(file_t *file);
void            file_foreach_line(file_t *file, void *context, void (*func)(void *context, char *line));

static file_t *file_new(void)
{
    file_t  *file;

    // allocate a new file
    if (!(file = malloc(sizeof(file_t))))
        return NULL;

    // initialize a new file
    file->name = NULL;
    file->size = 0;
    file->content = NULL;
    file->is_open = 0;
    file->fd = -1;
    file->cursor = 0;

    // return the file
    return file;
}

void file_free(file_t *file)
{
    // free the file content if needed
    if (file->content)
        free(file->content);

    // close the file if needed
    if (file->is_open)
        file_close(file);

    // free the file
    free(file);
}

file_t  *file_create(char *filename)
{
    int     fd;
    file_t  *file;

    // create the file
    if (!(file = file_new()))
        return NULL;

    // open the file
    if ((fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0755)) == -1) {
        file_free(file);
        return NULL;
    }

    // set the file as opened
    file->is_open = 1;
    file->fd = fd;

    // return the file
    return file;
}

int file_close(file_t *file)
{
    // check for errors
    if (file->is_open != 1 || file->fd == -1)
        return 0;

    // close the fd
    if (close(file->fd) == -1)
        return 0;

    // set the file infos
    file->is_open = 0;
    file->fd = -1;

    // success
    return 1;
}

file_t *file_read(char *file_name)
{
    int     fd;
    off_t   file_size;
    char    *file_content;
    file_t  *file;

    // open the file
    if ((fd = open(file_name, O_RDONLY)) == -1)
        return NULL;

    // seek the end of the file
    if ((file_size = lseek(fd, 0, SEEK_END)) == (off_t)-1) {
        close(fd);
        return NULL;
    }

    // check for file size overflow
    if (file_size > UINT_MAX) {
        close(fd);
        return NULL;
    }

    // seek the start of the file
    if (lseek(fd, 0, SEEK_SET) == -1) {
        close(fd);
        return NULL;
    }

    // allocate the file content
    if (!(file_content = malloc(file_size + 1))) {
        close(fd);
        return NULL;
    }

    // read the file content
    if (read(fd, file_content, file_size) != file_size) {
        free(file_content);
        close(fd);
        return NULL;
    }
    file_content[file_size] = 0;

    // close the file
    if (close(fd) == -1) {
        free(file_content);
        return NULL;
    }

    // create the file structure
    if (!(file = file_new())) {
        free(file_content);
        return NULL;
    }

    // set the file infos
    file->name = file_name;
    file->size = file_size;
    file->content = file_content;

    // return the file
    return file;
}

char *file_ext(char *filename)
{
    size_t  len = strlen(filename);

    // check for the last dot
    while (--len >= 0)
        if (filename[len] == '.')
            return filename + len;
    return NULL;
}

void file_print(file_t *file, char *format, ...) {
    va_list arg_list;

    // check for closed file
    if (file->is_open != 1)
        return;
    
    // print format in file
    va_start(arg_list, format);
    vdprintf(file->fd, format, arg_list);
    va_end(arg_list);
}

static int file_is_endline(file_t *file)
{
    if (file->cursor < file->size && file->content[file->cursor] == '\n') {
        file->cursor++;
        return 1;
    }
    if (file->cursor < file->size + 1 && !strncmp(file->content + file->cursor, "\r\n", 2)) {
        file->cursor += 2;
        return 1;
    }
    if (file->cursor == file->size)
        return 1;
    return 0;
}

static char *file_get_nextline(file_t *file)
{
    int             cursor_start;
    unsigned int    size;
    static char     line[2048];

    cursor_start = file->cursor;
    while (!file_is_endline(file))
        file->cursor++;
    size = file->cursor - cursor_start;
    if (!size)
        return NULL;
    if (size >= sizeof(line))
        return file_get_nextline(file);
    memcpy(line, file->content + cursor_start, size);
    line[size] = 0;
    if (line[--size] == '\n') {
        line[size] = 0;
        if (line[--size] == '\r')
            line[size] = 0;
    }
    return line;
}

void file_foreach_line(file_t *file, void *context, void (*func)(void *context, char *line))
{
    char    *line;

    while ((line = file_get_nextline(file)))
        func(context, line);
}
