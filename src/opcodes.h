#ifndef OPCODES_H
#define OPCODES_H

typedef struct qvm_opcode_info_s    qvm_opcode_info_t;
typedef struct qvm_opcode_s         qvm_opcode_t;

#include "opblocks.h"

typedef enum {
	OP_UNDEF, 
	OP_IGNORE,
	OP_BREAK,
	OP_ENTER,
	OP_LEAVE,
	OP_CALL,
	OP_PUSH,
	OP_POP,
	OP_CONST,
	OP_LOCAL,
	OP_JUMP,
    OP_EQ,
	OP_NE,
	OP_LTI,
	OP_LEI,
	OP_GTI,
	OP_GEI,
	OP_LTU,
	OP_LEU,
	OP_GTU,
	OP_GEU,
	OP_EQF,
	OP_NEF,
	OP_LTF,
	OP_LEF,
	OP_GTF,
	OP_GEF,
    OP_LOAD1,
	OP_LOAD2,
	OP_LOAD4,
	OP_STORE1,
	OP_STORE2,
	OP_STORE4,
	OP_ARG,
	OP_BLOCK_COPY,
    OP_SEX8,
	OP_SEX16,
	OP_NEGI,
	OP_ADD,
	OP_SUB,
	OP_DIVI,
	OP_DIVU,
	OP_MODI,
	OP_MODU,
	OP_MULI,
	OP_MULU,
	OP_BAND,
	OP_BOR,
	OP_BXOR,
	OP_BCOM,
	OP_LSH,
	OP_RSHI,
	OP_RSHU,
	OP_NEGF,
	OP_ADDF,
	OP_SUBF,
	OP_DIVF,
	OP_MULF,
	OP_CVIF,
	OP_CVFI,
    OP_MAX
} qvm_opcode_e;

typedef struct qvm_opcode_info_s {
    qvm_opcode_e    id;
    char            *name;
    int             param_size;
    qvm_opblock_e   opblock_id;
	char			*operation;
} qvm_opcode_info_t;

typedef struct qvm_opcode_s {
    unsigned int        address;
    qvm_opcode_info_t   *info;
    int                 value;
} qvm_opcode_t;

qvm_opcode_info_t   qvm_opcodes_info[OP_MAX];

#endif
