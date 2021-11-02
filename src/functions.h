#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct qvm_function_s       qvm_function_t;
typedef struct qvm_function_list_s  qvm_function_list_t;

#include "opblocks.h"
#include "variables.h"

typedef struct qvm_function_s {
    unsigned int        address;
    char                name[64];
    unsigned int        stack_size;
    unsigned int        return_size;
    qvm_opblock_t       *opblock_start;
    qvm_opblock_t       *opblock_end;
    qvm_variable_t      *locals;
    qvm_function_t      *next;
    qvm_function_list_t *calls;
    qvm_function_list_t *called_by;
    unsigned int        op_size;
} qvm_function_t;

typedef struct qvm_function_list_s {
    qvm_function_t      *function;
    qvm_function_list_t *next;
} qvm_function_list_t;

void                func_init(qvm_function_t *func);
qvm_function_t      *func_find(qvm_t *qvm, unsigned int address);
qvm_function_t      *func_add_syscall(qvm_t *qvm, unsigned int address);
void                func_rename(qvm_function_t *func, char *name);
qvm_function_list_t *func_list_add(qvm_function_list_t **list, qvm_function_t *func);

#endif
