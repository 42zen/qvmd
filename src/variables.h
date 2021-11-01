#ifndef VARIABLES_H
#define VARIABLES_H

typedef struct qvm_variable_s   qvm_variable_t;

#include "functions.h"

typedef struct qvm_variable_s {
    char                name[64];
    unsigned int        address;
    unsigned int        prob_size[5];
    unsigned int        size;
    char                *content;
    qvm_variable_t      *next;
    qvm_function_list_t *parents;
} qvm_variable_t;

qvm_variable_t  *var_get(qvm_t *qvm, qvm_function_t *function, unsigned int address, unsigned int size, qvm_function_t *parent);
qvm_variable_t  *var_find(qvm_variable_t *list, unsigned int address);
void            var_rename(qvm_variable_t *var, char *name);
qvm_variable_t  *var_cut(qvm_t *qvm, qvm_function_t *function, unsigned int address);

#endif
