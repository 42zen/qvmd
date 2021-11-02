#include "qvmd.h"

int             str_is_print(char *str, unsigned int max_size);

int str_is_print(char *str, unsigned int max_size)
{
    // check empty string
    if (!*str)
        return 0;

    // find a non-printable character
    for (unsigned int size = 0; *str && size < max_size; str++ && size++)
        if (!isprint(*str))
            return 0;

    // we hitted the max_size
    if (*str)
        return 0;

    // we didn't find any
    return 1;
}
