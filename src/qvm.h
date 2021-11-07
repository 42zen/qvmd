#ifndef QVM_H
#define QVM_H

#define QVM_MAGIC                   0x12721444
#define QVM_MAGIC_VER2              QVM_MAGIC + 1

typedef struct __attribute__((__packed__)) qvm_header_s     qvm_header_t;
typedef struct qvm_section_s                                qvm_section_t;
typedef struct qvm_s                                        qvm_t;

#include "opcodes.h"
#include "opblocks.h"
#include "functions.h"
#include "jumppoints.h"
#include "variables.h"
#include "map.h"
#include "strings.h"
#include "sections.h"

typedef struct __attribute__((__packed__)) qvm_header_s {
    int             magic;
    unsigned int    instructions_count;
    unsigned int    code_offset;
    unsigned int    code_length;
    unsigned int    data_offset;
    unsigned int    data_length;
    unsigned int    lit_length;
    unsigned int    bss_length;
    unsigned int    jmptab_length;
} qvm_header_t;

typedef struct qvm_s {
    file_t          *file;
    qvm_header_t    *header;
    qvm_section_t   sections[S_MAX];
    qvm_opcode_t    *opcodes;
    qvm_function_t  *functions;
    unsigned int    functions_count;
    qvm_function_t  *syscalls;
    unsigned int    syscalls_count;
    qvm_jumppoint_t *jumppoints;
    qvm_opblock_t   *opblocks;
    qvm_variable_t  *globals;
    unsigned int    globals_count;
    unsigned int    locals_count;
    qvm_map_t       *map;
    unsigned int    map_count;
    float           restored_calls_perc;
} qvm_t;

qvm_t   *qvm_load(char *filename, char *map_filename);
void    qvm_free(qvm_t *qvm);
int     qvm_disassemble(qvm_t *qvm, char *filename);
int     qvm_decompile(qvm_t *qvm, char *filename);

#endif
