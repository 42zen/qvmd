#include "qvmd.h"

int str_is_alnum(char *str);

int str_is_alnum(char *str)
{
    while (*str) {
        if (!isalnum(*str))
            return 0;
        str++;
    }

    return 1;
}
