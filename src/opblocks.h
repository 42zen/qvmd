#ifndef OPBLOCKS_H
#define OPBLOCKS_H

typedef struct qvm_opblock_info_s   qvm_opblock_info_t;
typedef struct qvm_opblock_s        qvm_opblock_t;

#include "opcodes.h"
#include "functions.h"
#include "jumppoints.h"
#include "variables.h"

typedef enum {
	OPB_UNDEF,
	OPB_FUNC_ENTER,
	OPB_FUNC_RETURN,
	OPB_FUNC_LEAVE,
	OPB_FUNC_ARG,
	OPB_FUNC_CALL,
	OPB_PUSH,
	OPB_POP,
	OPB_CONST,
	OPB_GLOBAL_ADR,
    OPB_GLOBAL,
	OPB_LOCAL_ADR,
    OPB_LOCAL,
	OPB_JUMP,
    OPB_COMPARE,
    OPB_LOAD,
	OPB_ASSIGNATION,
	OPB_STRUCT_COPY,
    OPB_OPERATION,
    OPB_DOUBLE_OPERATION,
    OPB_JUMP_POINT,
    OPB_JUMP_ADDRESS,
    OPB_MAX
} qvm_opblock_e;

typedef enum {
    OPB_F_STACK_POP = 1,
    OPB_F_STACK_2POP = 2,
    OPB_F_STACK_PUSH = 4,
    OPB_F_BLOCK_ADD = 8,
} qvm_opblock_flag_e;

typedef struct qvm_opblock_info_s {
    qvm_opblock_e   id;
    int             flags;
} qvm_opblock_info_t;

typedef struct qvm_opblock_s {
    qvm_opblock_info_t  *info;
    qvm_opcode_t        *opcode;
    qvm_opblock_t       *prev;
    qvm_opblock_t       *next;
    qvm_opblock_t       *child;
    qvm_opblock_t       *op1;
    qvm_opblock_t       *op2;
    qvm_function_t      *function;
    qvm_opcode_t        *opcodes;
    unsigned int        opcodes_count;
    qvm_function_t      *function_called;
    qvm_jumppoint_t     *jumppoint;
    qvm_variable_t      *variable;
    qvm_opblock_t       *return_goto;
    qvm_opblock_t       *function_arg;
} qvm_opblock_t;

qvm_opblock_t   *opb_new(void);
void            opb_free(qvm_opblock_t *opb);
void            opb_push(qvm_opblock_t *opb, qvm_opblock_t **list);
qvm_opblock_t   *opb_pop(qvm_opblock_t **list);
void            opb_add(qvm_opblock_t *opb, qvm_opblock_t **list);
void            opb_print(file_t *file, qvm_opblock_t *opb);
int             opb_load_variables(qvm_t *qvm, qvm_opblock_t *opb);
qvm_opblock_t   *opb_is_call(qvm_opblock_t *opb);

qvm_opblock_info_t  qvm_opblocks_info[OPB_MAX];

#endif
