#ifndef SECTIONS_H
#define SECTIONS_H

typedef enum {
    S_CODE,
    S_DATA,
    S_LIT,
    S_BSS,
    S_JMPTAB,
    S_MAX
} qvm_section_e;

typedef struct qvm_section_s {
    char            *content;
    unsigned int    length;
} qvm_section_t;

void    section_set(qvm_section_t *sec, char *content, unsigned int length);

#endif
