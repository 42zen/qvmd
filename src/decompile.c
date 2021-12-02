#include "qvmd.h"

int         qvm_decompile(qvm_t *qvm, char *filename);
static void qvm_decompile_header(qvm_t *qvm);
static void qvm_decompile_globals(qvm_t *qvm);
static void qvm_decompile_functions(qvm_t *qvm);
static void qvm_decompile_function_header(qvm_function_t *func);
static void qvm_decompile_function_code(qvm_function_t *func);
static void qvm_decompile_function_locals(qvm_function_t *func);

int qvm_decompile(qvm_t *qvm, char *filename)
{
    printf("Decompilling QVM to %s...", filename);

    // create the output file
    if (!(qvm->output_file = file_create(filename)))
        return 0;

    // print the header in file
    qvm_decompile_header(qvm);

    // print all globals in file
    qvm_decompile_globals(qvm);

    // print all functions code in file
    qvm_decompile_functions(qvm);

    // free the created file
    file_free(qvm->output_file);

    printf("Success.\n");

    // success
    return 1;
}

static void qvm_decompile_header(qvm_t *qvm)
{
    file_print(qvm->output_file, "/*\n");
    file_print(qvm->output_file, "\tQVM Decompiler " QVMD_VERSION " by zen\n\n");
    file_print(qvm->output_file, "\tName: %s\n", qvm->file->name);
    file_print(qvm->output_file, "\tOpcodes Count: %i\n", qvm->header->instructions_count);
    // TODO: Opblocks Count
    file_print(qvm->output_file, "\tFunctions Count: %i\n", qvm->functions_count);
    file_print(qvm->output_file, "\tSyscalls Count: %i\n", qvm->syscalls_count);
    file_print(qvm->output_file, "\tGlobals Count: %i\n", qvm->globals_count);
    file_print(qvm->output_file, "\tCalls Restored: %.2f\n", qvm->restored_calls_perc);
    file_print(qvm->output_file, "*/\n\n");
}

static void qvm_decompile_globals(qvm_t *qvm)
{
    qvm_variable_t      *var;
    qvm_function_list_t *list;

    // browse all variables
    for (var = qvm->globals; var; var = var->next) {
        // print variable type
        file_print(qvm->output_file, "%s", var->type->pretty_name);

        // print variable name
        file_print(qvm->output_file, "%s", var->name);

        // print variable size if needed
        if (var->type->flags & TF_ARRAY)
            file_print(qvm->output_file, "[%u]", var->size);

        // print variables content if needed
        if (var->status == VS_GLOBAL) {
            file_print(qvm->output_file, " = ");
            if (var->size == 1)
                file_print(qvm->output_file, "%hhi", *var->content);
            else if (var->size == 2)
                file_print(qvm->output_file, "%hi", *(short *)var->content);
            else if (var->size == 4)
                file_print(qvm->output_file, "%i", *(int *)var->content);
            else {
                file_print(qvm->output_file, "\"");
                for (unsigned int i = 0; i < var->size; i++)
                    file_print(qvm->output_file, "\\x%02hhx", var->content[i]);
                file_print(qvm->output_file, "\"");
            }
        }
        else if (var->status == VS_LITERAL_TEXT) {
            file_print(qvm->output_file, " = \"");
            for (unsigned int i = 0; i < var->size - 1; i++) {
                if (var->content[i] == '\"' || var->content[i] == '\\')
                    file_print(qvm->output_file, "\\");
                file_print(qvm->output_file, "%c", var->content[i]);
            }
            file_print(qvm->output_file, "\"");
        }
        else if (var->status == VS_LITERAL) {
            file_print(qvm->output_file, " = \"");
            for (unsigned int i = 0; i < var->size; i++)
                file_print(qvm->output_file, "\\x%02hhx", var->content[i]);
            file_print(qvm->output_file, "\"");
        }

        // print a semicolon to end the line
        file_print(qvm->output_file, ";");

        // print the variable 'used by' comments
        if (var->parents)
            file_print(qvm->output_file, " // Used by: ");
        for (list = var->parents; list; list = list->next) {
            if (list != var->parents)
                file_print(qvm->output_file, ", ");
            file_print(qvm->output_file, "%s", list->function->name);
        }

        // go to the next line
        file_print(qvm->output_file, "\n");
    }
    
    // print an end of line after all the variables
    file_print(qvm->output_file, "\n");
}

static void qvm_decompile_functions(qvm_t *qvm)
{
    qvm_function_t  *func;

    // browse all functions
    for (unsigned int i = 0; i < qvm->functions_count; i++) {
        // get the current function
        func = &qvm->functions[i];

        // print the function header
        qvm_decompile_function_header(func);

        // print the function code
        qvm_decompile_function_code(func);

        // print an end of line after the functions
        file_print(qvm->output_file, "\n");
    }
}

static void qvm_decompile_function_header(qvm_function_t *func)
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

static void qvm_decompile_function_code(qvm_function_t *func)
{
    qvm_opblock_t   *opb;

    // browse all function opblocks
    for (opb = func->opblock_start; opb != func->opblock_end; opb = opb->next) {
        // if the opblock have opcodes
        if (opb->opcodes_count) {
            // print the tab if needed
            if (opb->info->id != OPB_FUNC_ENTER && opb->info->id != OPB_FUNC_LEAVE && opb->info->id != OPB_FUNC_ARG)
                file_print(func->qvm->output_file, "\t");
                
            // print the decompiled opblock
            opb_print(func->qvm->output_file, opb);

            // print the semicolon if needed
            if (opb->info->id != OPB_FUNC_ENTER && opb->info->id != OPB_FUNC_LEAVE && opb->info->id != OPB_FUNC_ARG)
                file_print(func->qvm->output_file, ";");

            // print an end of line after the opblock code
            file_print(func->qvm->output_file, "\n");
        }

        // if the opblock is a jumppoint
        if (opb->info->id == OPB_JUMP_POINT) {
            // print the jumppoint code
            opb_print(func->qvm->output_file, opb);

            // print an end of line after the jumppoint
            file_print(func->qvm->output_file, "\n");
        }

        // if the opblock is a function enter
        if (opb->info->id == OPB_FUNC_ENTER)
            qvm_decompile_function_locals(func);
    }
}

static void qvm_decompile_function_locals(qvm_function_t *func)
{
    qvm_variable_t  *var;

    // print all locals
    for (var = func->locals; var && var->address < func->stack_size; var = var->next) {
        file_print(func->qvm->output_file, "\t%s%s", var->type->pretty_name, var->name);
        if (var->type->flags & TF_ARRAY)
            file_print(func->qvm->output_file, "[%u]", var->size);
        file_print(func->qvm->output_file, ";\n");
    }

    // print an end of line after the variables
    file_print(func->qvm->output_file, "\n");
}
