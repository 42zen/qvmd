#include "qvmd.h"

void    section_set(qvm_section_t *sec, char *content, unsigned int length);

void section_set(qvm_section_t *sec, char *content, unsigned int length)
{
    sec->content = content;
    sec->length = length;
}
