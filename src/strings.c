#include "qvmd.h"

int str_is_print(char *str);

int str_is_print(char *str)
{
    // find a non-printable character
    for (; *str; str++)
        if (!isprint(*str))
            return 0;

    // we didn't find any
    return 1;
}
