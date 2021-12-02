#include "qvmd.h"

int             qvm_disassemble(qvm_t *qvm, char *filename);
static void     qvm_disassemble_header(qvm_t *qvm);
static void     qvm_disassemble_functions(qvm_t *qvm);
static void     qvm_disassemble_function_header(qvm_function_t *func);
static void     qvm_disassemble_function_code(qvm_function_t *func);
static void     qvm_disassemble_opcode(qvm_opcode_t *op);

int qvm_disassemble(qvm_t *qvm, char *filename)
{
    printf("Disassembling QVM to %s...", filename);

    // create the output file
    if (!(qvm->output_file = file_create(filename)))
        return 0;

    // print the header in file
    qvm_disassemble_header(qvm);

    // print the function code
    qvm_disassemble_functions(qvm);

    // free the created file
    file_free(qvm->output_file);

    printf("Success.\n");

    // success
    return 1;
}

static void qvm_disassemble_header(qvm_t *qvm)
{
    file_print(qvm->output_file, "/*\n");
    file_print(qvm->output_file, "\tQVM Disassembler " QVMD_VERSION " by zen\n\n");
    file_print(qvm->output_file, "\tName: %s\n", qvm->file->name);
    file_print(qvm->output_file, "\tOpcodes Count: %i\n", qvm->header->instructions_count);
    // TODO: Opblocks Count
    file_print(qvm->output_file, "\tFunctions Count: %i\n", qvm->functions_count);
    file_print(qvm->output_file, "\tSyscalls Count: %i\n", qvm->syscalls_count);
    file_print(qvm->output_file, "\tGlobals Count: %i\n", qvm->globals_count);
    file_print(qvm->output_file, "\tCalls Restored: %.2f\n", qvm->restored_calls_perc);
    file_print(qvm->output_file, "*/\n\n");
}

static void qvm_disassemble_functions(qvm_t *qvm)
{
    qvm_function_t  *func;

    // browse all functions
    for (unsigned int i = 0; i < qvm->functions_count; i++) {
        // get the current function
        func = &qvm->functions[i];

        // print the function header
        qvm_disassemble_function_header(func);

        // print the function code
        qvm_disassemble_function_code(func);

        // print an end of line after the function if needed
        if (i + 1 < qvm->functions_count)
            file_print(qvm->output_file, "\n");
    }
}

static void qvm_disassemble_function_header(qvm_function_t *func)
{
    qvm_function_list_t *list;

    // print header format
    file_print(func->qvm->output_file, "/*\n");
    file_print(func->qvm->output_file, "=================\n");

    // print function name
    file_print(func->qvm->output_file, "%s\n\n", func->name);

    // print function address
    file_print(func->qvm->output_file, "Address: 0x%x\n", func->address);

    // print function stack size
    file_print(func->qvm->output_file, "Stack Size: 0x%x\n", func->stack_size);

    // print function opcodes count
    file_print(func->qvm->output_file, "Opcodes Size: 0x%x\n", func->op_size);

    // TODO: print function opblocks count

    // print function locals count
    file_print(func->qvm->output_file, "Locals Count: %i\n\n", func->locals_count);

    // print function calls
    if (func->calls) {
        file_print(func->qvm->output_file, "Calls: ");
        for (list = func->calls; list; list = list->next) {
            if (list != func->calls)
                file_print(func->qvm->output_file, ", ");
            file_print(func->qvm->output_file, "%s", list->function->name);
        }
        file_print(func->qvm->output_file, "\n");
    }

    // print function called by
    if (func->called_by) {
        file_print(func->qvm->output_file, "Called by: ");
        for (list = func->called_by; list; list = list->next) {
            if (list != func->called_by)
                file_print(func->qvm->output_file, ", ");
            file_print(func->qvm->output_file, "%s", list->function->name);
        }
        file_print(func->qvm->output_file, "\n");
    }

    // print header format
    file_print(func->qvm->output_file, "=================\n");
    file_print(func->qvm->output_file, "*/\n");
}

static void qvm_disassemble_function_code(qvm_function_t *func)
{
    qvm_jumppoint_t *jmp;

    for (unsigned int i = 0; i < func->op_size; i++) {
        // print the jumppoint if needed
        if ((jmp = jumppoint_find(func->qvm, func->address + i)))
            file_print(func->qvm->output_file, "\n%s:\n", jmp->name);

        // print the opcode
        qvm_disassemble_opcode(&func->qvm->opcodes[func->address + i]);
    }
}

static void qvm_disassemble_opcode(qvm_opcode_t *op)
{
    // print the opcode name
    file_print(op->qvm->output_file, "0x%-6x %s", op->address, op->info->name);

    // print the opcode parameter if needed
    if (op->opblock->info->id == OPB_FUNC_CALL && op->opblock->function_called)
        file_print(op->qvm->output_file, " %s", op->opblock->function_called->name);
    else if (op->opblock->jumppoint && op->info->param_size)
        file_print(op->qvm->output_file, " %s", op->opblock->jumppoint->name);
    else if (op->opblock->info->id == OPB_GLOBAL_ADR || op->opblock->info->id == OPB_LOCAL_ADR)
        file_print(op->qvm->output_file, " &%s", op->opblock->variable->name);
    else if (op->info->param_size)
        file_print(op->qvm->output_file, " 0x%x", op->value);

    // print the end of line
    file_print(op->qvm->output_file, "\n");
}
