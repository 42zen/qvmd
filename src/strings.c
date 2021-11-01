#include "qvmd.h"

int str_is_print(char *str);

int str_is_print(char *str)
{
    while (*str) {
        if (!isprint(*str))
            return 0;
        str++;
    }

    return 1;
}
