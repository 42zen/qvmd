#include "qvmd.h"

int             qvm_disassemble(qvm_t *qvm, char *filename);
static void     qvm_disassemble_header(qvm_t *qvm, file_t *file);
static void     qvm_disassemble_functions(qvm_t *qvm, file_t *file);
static void     qvm_disassemble_function_header(file_t *file, qvm_function_t *func);
static void     qvm_disassemble_function_code(qvm_t *qvm, file_t *file, qvm_function_t *func);

int qvm_disassemble(qvm_t *qvm, char *filename)
{
    file_t          *file;

    printf("Disassembling QVM to %s...", filename);
    fflush(stdout);

    // create the output file
    if (!(file = file_create(filename)))
        return 0;

    // print the header in file
    qvm_disassemble_header(qvm, file);

    // print the function code
    qvm_disassemble_functions(qvm, file);

    // free the created file
    file_free(file);

    printf("Success.\n");

    // success
    return 1;
}

static void qvm_disassemble_header(qvm_t *qvm, file_t *file)
{
    file_print(file, "/*\n");
    file_print(file, "\tQVM Disassembler " QVMD_VERSION " by zen\n\n");
    file_print(file, "\tName: %s\n", qvm->file->name);
    file_print(file, "\tInstructions Count: %i\n", qvm->header->instructions_count);
    file_print(file, "\tFunctions Count: %i\n", qvm->functions_count);
    file_print(file, "\tSyscalls Count: %i\n", qvm->syscalls_count);
    file_print(file, "\tGlobals Count: %i\n", qvm->globals_count);
    file_print(file, "*/\n\n");
}

static void qvm_disassemble_functions(qvm_t *qvm, file_t *file)
{
    qvm_function_t  *func;

    // browse all functions
    for (unsigned int i = 0; i < qvm->functions_count; i++) {
        // get the current function
        func = &qvm->functions[i];

        // print the function header
        qvm_disassemble_function_header(file, func);

        // print the function code
        qvm_disassemble_function_code(qvm, file, func);

        // print an end of line after the function if needed
        if (i + 1 < qvm->functions_count)
            file_print(file, "\n");
    }
}

static void qvm_disassemble_function_header(file_t *file, qvm_function_t *func)
{
    // print the function header
    file_print(file, "/*\n=================\n%s\n=================\n*/\n", func->name);

    // print the function name
    file_print(file, "%s:\n", func->name);
}

static void qvm_disassemble_function_code(qvm_t *qvm, file_t *file, qvm_function_t *func)
{
    qvm_opcode_t    *op;
    qvm_jumppoint_t *jmp;

    for (unsigned int i = 0; i < func->op_size; i++) {
        // get the current opcode
        op = &qvm->opcodes[func->address + i];

        // print the jumppoint if needed
        if ((jmp = jumppoint_find(qvm, func->address + i)))
            file_print(file, "\n%s:\n", jmp->name);

        // print the opcode name
        file_print(file, "0x%-6x %s", func->address + i, op->info->name);

        // print the opcode parameter if needed
        if (op->opblock->info->id == OPB_FUNC_CALL && op->opblock->function_called)
            file_print(file, " %s", op->opblock->function_called->name);
        else if (op->info->param_size)
            file_print(file, " 0x%x", op->value);

        // print the end of line
        file_print(file, "\n");
    }
}
