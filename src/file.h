#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <limits.h>

typedef struct {
    char            *name;
    char            *content;
    size_t          size;
    char            is_open;
    int             fd;
    unsigned int    cursor;
} file_t;

void    file_free(file_t *file);
file_t  *file_create(char *filename);
file_t  *file_read(char *filename);
char    *file_ext(char *filename);
void    file_print(file_t *file, char *format, ...);
void    file_foreach_line(file_t *file, void *context, void (*func)(void *context, char *line));

#endif
