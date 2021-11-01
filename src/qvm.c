#include "qvmd.h"

static qvm_t    *qvm_new(void);
void            qvm_free(qvm_t *qvm);
qvm_t           *qvm_load(char *filename, char *map_filename);
static int      qvm_load_file(qvm_t *qvm, char *filename);
static int      qvm_load_map(qvm_t *qvm, char *map_filename);
static void     qvm_load_map_functions(qvm_t *qvm);
static int      qvm_load_opcodes(qvm_t *qvm);
static int      qvm_load_functions(qvm_t *qvm);
static void     qvm_load_functions_count(qvm_t *qvm);
static void     qvm_load_functions_data(qvm_t *qvm);
static int      qvm_load_jumppoints(qvm_t *qvm);
static int      qvm_load_opblocks(qvm_t *qvm);
static int      qvm_load_syscalls(qvm_t *qvm);
static int      qvm_load_syscalls_usage(qvm_t *qvm);
static int      qvm_load_variables(qvm_t *qvm);
static int      qvm_load_variables_usage(qvm_t *qvm);
static int      qvm_load_variables_sections(qvm_t *qvm);
static void     qvm_load_variables_globals_size(qvm_t *qvm);
static void     qvm_load_variables_locals_size(qvm_t *qvm);
static int      qvm_load_variables_map(qvm_t *qvm);
static int      qvm_load_returns(qvm_t *qvm);
static int      qvm_load_calls(qvm_t *qvm);

static qvm_t *qvm_new(void)
{
    qvm_t   *qvm;

    // allocate the qvm
    if (!(qvm = malloc(sizeof(qvm_t)))) {
        printf("Error: Couldn't allocate qvm.\n");
        return NULL;
    }

    // initialize the qvm content
    qvm->file = NULL;
    qvm->header = NULL;
    qvm->opcodes = NULL;
    qvm->functions = NULL;
    qvm->functions_count = 0;
    qvm->syscalls = NULL;
    qvm->syscalls_count = 0;
    qvm->jumppoints = NULL;
    qvm->opblocks = NULL;
    qvm->globals = NULL;
    qvm->globals_count = 0;
    qvm->locals_count = 0;
    qvm->map = NULL;
    qvm->restored_calls_perc = 0.0f;

    // init all qvm sections
    for (int i = S_CODE; i < S_MAX; i++) {
        qvm->sections[i].content = NULL;
        qvm->sections[i].length = 0;
    }

    // return the qvm
    return qvm;
}

void qvm_free(qvm_t *qvm)
{
    // free the file if needed
    if (qvm->file)
        file_free(qvm->file);

    // free the opcodes if needed
    if (qvm->opcodes)
        free(qvm->opcodes);

    // free the opblocks if needed
    if (qvm->opblocks)
        opb_free(qvm->opblocks);

    // free the functions if needed
    if (qvm->functions)
        free(qvm->functions);

    // free the qvm
    free(qvm);
}

qvm_t *qvm_load(char *filename, char *map_filename)
{
    qvm_t   *qvm;

    // create a new qvm
    if (!(qvm = qvm_new()))
        return NULL;

    // load all qvm parts
    if (!qvm_load_file(qvm, filename) ||
        (map_filename && !qvm_load_map(qvm, map_filename)) ||
        !qvm_load_opcodes(qvm) ||
        !qvm_load_functions(qvm) ||
        !qvm_load_jumppoints(qvm) ||
        !qvm_load_opblocks(qvm) ||
        !qvm_load_syscalls(qvm) ||
        !qvm_load_variables(qvm) ||
        !qvm_load_returns(qvm) ||
        !qvm_load_calls(qvm)) {
        qvm_free(qvm);
        return NULL;
    }

    // return the qvm
    return qvm;
}

static int qvm_load_file(qvm_t *qvm, char *filename)
{
    printf("Loading qvm file...");
    fflush(stdout);

    // read the qvm file
    if (!(qvm->file = file_read(filename))) {
        printf("Error: %s: Couldn't read file.\n", filename);
        return 0;
    }

    // check the qvm size
    if (qvm->file->size < sizeof(int)) {
        printf("Error: %s: File is corrupted.\n", filename);
        return 0;
    }

    // get the qvm header
    qvm->header = (qvm_header_t *)qvm->file->content;

    // check the qvm header magic
    if (qvm->header->magic != QVM_MAGIC && qvm->header->magic != QVM_MAGIC_VER2) {
        printf("Error: %s: Unknown file format.\n", filename);
        return 0;
    }

    // check the qvm size
    if (qvm->file->size < sizeof(qvm_header_t) ||
        qvm->file->size < qvm->header->data_offset + qvm->header->data_length + qvm->header->lit_length) {
        printf("Error: %s: File is corrupted.\n", filename);
        return 0;
    }

    // assign all qvm sections
    qvm->sections[S_CODE].content = qvm->file->content + qvm->header->code_offset;
    qvm->sections[S_CODE].length = qvm->header->code_length;
    qvm->sections[S_DATA].content = qvm->file->content + qvm->header->data_offset;
    qvm->sections[S_DATA].length = qvm->header->data_length;
    qvm->sections[S_LIT].content = qvm->file->content + qvm->header->data_offset + qvm->header->data_length;
    qvm->sections[S_LIT].length = qvm->header->lit_length;
    qvm->sections[S_BSS].content = NULL;
    qvm->sections[S_BSS].length = qvm->header->bss_length;

    printf("Success.\n");

    // success
    return 1;
}

int qvm_load_map(qvm_t *qvm, char *map_filename)
{
    file_t          *file;
    char            *line;
    int             section_id;
    unsigned int    address;
    qvm_map_t       *map = NULL;
    qvm_map_t       *entry;
    unsigned int    line_count = 0;

    // read the map file
    if (!(file = file_read(map_filename))) {
        printf("Warning: Couldn't read map file %s.\n", map_filename);
        return 1;
    }

    // browse each map line 
    while ((line = file_get_nextline(file))) {
        // increase the line count
        line_count++;

        // parse the section id
        section_id = atoi(line);

        // parse the address
        while (isalnum(*line))
            line++;
        while (isspace(*line))
            line++;
        address = strtol(line, NULL, 16);

        // parse the name
        while (isalnum(*line))
            line++;
        while (isspace(*line))
            line++;

        // check if the name is too big
        if (strlen(line) >= sizeof(map->name)) {
            printf("Warning: Line %i of map file was ignored: Too long name.\n", line_count);
            continue;
        }

        // TODO: check if name is only alphanum char

        // check if the section id is valid
        if (section_id < 0 || section_id >= S_MAX) {
            printf("Warning: Line %i of map file was ignored: Invalid section id.\n", line_count);
            continue;
        }

        // TODO: check address overflow for S_DATA, S_LIT and S_BSS

        // correct the address for literal and bss section
        if (section_id == S_LIT)
            address += qvm->sections[S_LIT].length;
        else if (section_id == S_BSS)
            address += qvm->sections[S_LIT].length + qvm->sections[S_BSS].length;

        // create a new map entry
        if (!(entry = map_new())) {
            continue;
        }

        // set the map entry values
        entry->section_id = section_id;
        entry->address = address;
        sprintf(entry->name, "%s", line);

        // add new map entry
        if (!map)
            qvm->map = entry;
        else
            map->next = entry;
        map = entry;
    }

    // success
    return 1;
}

static void qvm_load_map_functions(qvm_t *qvm)
{
    qvm_map_t       *map;
    qvm_function_t  *func;

    // browse each map
    for (map = qvm->map; map; map = map->next) {
        // check if this is a function entry
        if (map->section_id != S_CODE)
            continue;

        // check if the function address is valid
        if (!(func = func_find(qvm, map->address)))
            continue;

        // rename the function or syscall
        func_rename(func, map->name);
    }
}

static int qvm_load_opcodes(qvm_t *qvm)
{
    unsigned int    curr_instr;
    char            *raw_opcodes = qvm->sections[S_CODE].content;
    char            *end_opcodes = qvm->sections[S_CODE].content + qvm->sections[S_CODE].length;

    printf("Loading opcodes...");
    fflush(stdout);

    // allocate the opcodes
    if (!(qvm->opcodes = malloc(sizeof(*qvm->opcodes) * qvm->header->instructions_count))) {
        printf("Error: Couldn't allocates opcodes.\n");
        return 0;
    }

    // browse all opcodes
    for (curr_instr = 0; curr_instr < qvm->header->instructions_count && raw_opcodes < end_opcodes; curr_instr++) {
        qvm_opcode_e    ope = *raw_opcodes++;

        // check for invalid opcode
        if (ope < OP_UNDEF || ope >= OP_MAX) {
            printf("Error: Invalid opcode %i\n", ope);
            return 0;
        }

        // parse the opcode
        qvm->opcodes[curr_instr].address = curr_instr;
        qvm->opcodes[curr_instr].info = &qvm_opcodes_info[ope];

        // parse the opcode parameters if any
        if (qvm->opcodes[curr_instr].info->param_size == 4)
            qvm->opcodes[curr_instr].value = *(int *)raw_opcodes;
        else if (qvm->opcodes[curr_instr].info->param_size == 1)
            qvm->opcodes[curr_instr].value = *raw_opcodes;

        // go to the next opcode
        raw_opcodes += qvm->opcodes[curr_instr].info->param_size;
    }

    printf("Success: %i opcodes found.\n", curr_instr);

    // success
    return 1;
}

static int qvm_load_functions(qvm_t *qvm)
{
    printf("Loading functions...");
    fflush(stdout);

    // count the functions
    qvm_load_functions_count(qvm);

    // allocate the functions
    if (!(qvm->functions = malloc(sizeof(*qvm->functions) * qvm->functions_count))) {
        printf("Error: Couldn't allocate functions list.\n");
        return 0;
    }

    // TODO: func_init on all function!

    // load the functions data
    qvm_load_functions_data(qvm);

    // load the functions map
    qvm_load_map_functions(qvm);

    printf("Success: %i functions found.\n", qvm->functions_count);

    // success
    return 1;
}

static void qvm_load_functions_count(qvm_t *qvm)
{
    unsigned int    curr_instr;

    // reset the functions count
    qvm->functions_count = 0;

    // count the functions
    for (curr_instr = 0; curr_instr < qvm->header->instructions_count; curr_instr++) {
        qvm_opcode_t    *op;

        // get the current opcode
        op = &qvm->opcodes[curr_instr];

        // check if this is a new function
        if (op->info->id == OP_ENTER)
            qvm->functions_count++;
    }
}

static void qvm_load_functions_data(qvm_t *qvm)
{
    unsigned int    curr_instr;
    unsigned int    func_count = -1;

    // browse all opcodes
    for (curr_instr = 0; curr_instr < qvm->header->instructions_count; curr_instr++) {
        qvm_opcode_t    *op;
        qvm_function_t  *func;

        // get the current opcode
        op = &qvm->opcodes[curr_instr];

        // check if this is a new function
        if (op->info->id == OP_ENTER) {
            // get the current function
            func = &qvm->functions[++func_count];

            // initialize the function
            func->opblock_start = NULL;
            func->opblock_end = NULL;
            func->locals = NULL;

            // save the function infos
            func->address = curr_instr;
            if (!func->address)
                sprintf(func->name, "vmMain");
            else
                sprintf(func->name, "sub_%x", func->address);
            func->stack_size = op->value;
            func->return_size = 0;
        }
    }
}

static int qvm_load_jumppoints(qvm_t *qvm) {
    unsigned int    jumppoints_count = 0;

    printf("Loading jumppoints...");
    fflush(stdout);

    // browse all opcodes
    for (unsigned int curr_instr = 0; curr_instr < qvm->header->instructions_count; curr_instr++) {
        qvm_opcode_t    *op;

        // get the current opcode
        op = &qvm->opcodes[curr_instr];

        // check if this is a comparaison
        if (op->info->opblock_id == OPB_COMPARE) {
            // add the jumppoint
            if (!jumppoint_add(qvm, op->value))
                return 0;
            jumppoints_count++;
        }

        // check if this is a direct jump
        if (op->info->id == OP_JUMP) {
            // if this isn't the 1st instruction
            if (curr_instr != 0) {
                // get the previous opcode
                op = &qvm->opcodes[curr_instr - 1];

                // check if this is a constant
                if (op->info->id == OP_CONST) {
                    // add the jumppoint
                    if (!jumppoint_add(qvm, op->value))
                        return 0;
                    jumppoints_count++;
                }
            }
        }
    }

    printf("Success: %i jumppoints found.\n", jumppoints_count);

    // success
    return 1;
}

static int qvm_load_opblocks(qvm_t *qvm)
{
    qvm_opblock_t   *stack = NULL;
    qvm_opblock_t   *final_opb = NULL;
    unsigned int    address_start = (unsigned int)-1;
    unsigned int    opblocks_count = 0;
    qvm_function_t  *curr_func = NULL;

    printf("Loading opblocks...");
    fflush(stdout);

    // browse all opcodes
    for (unsigned int curr_instr = 0; curr_instr < qvm->header->instructions_count; curr_instr++) {
        qvm_opcode_t    *op;
        qvm_opblock_t   *opb;
        qvm_jumppoint_t *jmp;
        qvm_opblock_t   *jmp_opb;

        // get the current opcode
        op = &qvm->opcodes[curr_instr];

        // create a new opblock
        if (!(opb = opb_new())) {
            opb_free(stack);
            return (0);
        }

        // save the opblock infos
        opb->info = &qvm_opblocks_info[op->info->opblock_id];
        opb->opcode = op;

        // save the start address if needed
        if (address_start == (unsigned int)-1)
            address_start = curr_instr;

        // save the child from stack if needed
        if (opb->info->flags & OPB_F_STACK_POP) {
            if (!(opb->child = opb_pop(&stack))) {
                opb_free(stack);
                opb_free(opb);
                return (0);
            }
        }

        // save the operations from stack if needed
        if (opb->info->flags & OPB_F_STACK_2POP) {
            if (!(opb->op1 = opb_pop(&stack)) || !(opb->op2 = opb_pop(&stack))) {
                opb_free(stack);
                opb_free(opb);
                return (0);
            }
        }

        // save load size into opcode value
        if (opb->info->id == OPB_LOAD) {
            if (op->info->id == OP_LOAD1)
                op->value = 1;
            else if (op->info->id == OP_LOAD2)
                op->value = 2;
            else
                op->value = 4;
        }

        // save store size into opcode value
        if (opb->info->id == OPB_ASSIGNATION) {
            if (op->info->id == OP_STORE1)
                op->value = 1;
            else if (op->info->id == OP_STORE2)
                op->value = 2;
            else
                op->value = 4;
        }

        // find function called if needed
        if (opb->info->id == OPB_FUNC_CALL && opb->child->info->id == OPB_CONST)
            if ((opb->function_called = func_find(qvm, opb->child->opcode->value)) && curr_func)
                if (!func_list_add(&curr_func->calls, opb->function_called) || !func_list_add(&opb->function_called->called_by, curr_func))
                    return 0;

        // check if this is a new function
        if (opb->info->id == OPB_FUNC_ENTER) {
            // check if there was already a function scanned
            if (curr_func)
                curr_func->opblock_end = opb;

            // get the new current function scanned
            curr_func = func_find(qvm, curr_instr);

            // save the opblock in the function
            curr_func->opblock_start = opb;
        }

        // save the function in the opblock
        opb->function = curr_func;

        // check if there is a jumppoint here
        if ((jmp = jumppoint_find(qvm, curr_instr))) {
            // create a new jumppoint opblock
            if (!(jmp_opb = opb_new())) {
                opb_free(stack);
                return 0;
            }

            // save the jumppoint opblock info
            jmp_opb->info = &qvm_opblocks_info[OPB_JUMP_POINT];
            jmp_opb->jumppoint = jmp;
            jmp_opb->function = curr_func;

            // add it in first place if needed
            if (!final_opb)
                qvm->opblocks = jmp_opb;

            // add the opblock to the list
            opb_add(jmp_opb, &final_opb);
            opblocks_count++;

            // reset the opblock in function if needed
            if (opb->info->id == OPB_FUNC_ENTER)
                curr_func->opblock_start = jmp_opb;
        }

        // push the opblock to the stack if needed
        if (opb->info->flags & OPB_F_STACK_PUSH)
            opb_push(opb, &stack);

        // check if we need to add the opblock
        if (opb->info->flags & OPB_F_BLOCK_ADD) {
            // save the opblock infos
            opb->opcodes = &qvm->opcodes[address_start];
            opb->opcodes_count = curr_instr - address_start + 1;

            // reset the start address for the next opblock
            address_start = (unsigned int)-1;

            // if this is the first opblock save it in qvm
            if (!final_opb)
                qvm->opblocks = opb;

            // add the opblock to the list
            opb_add(opb, &final_opb);
            opblocks_count++;
        }

        // check if this is a comparaison
        if (opb->info->id == OPB_COMPARE) {
            // link the jumppoint to the opblock
            opb->jumppoint = jumppoint_find(qvm, opb->opcode->value);
        }

        // check if this is a direct jump
        if (opb->info->id == OPB_JUMP && opb->child && opb->child->info->id == OPB_CONST) {
            // link the jumppoint to the opblock
            opb->child->info = &qvm_opblocks_info[OPB_JUMP_ADDRESS];
            opb->child->jumppoint = jumppoint_find(qvm, opb->child->opcode->value);
            opb->jumppoint = opb->child->jumppoint;
        }

        // check if this is a function leave opcodes
        if (opb->info->id == OPB_FUNC_RETURN && opb->child && opb->child->info->id == OPB_PUSH)
            opb->info = &qvm_opblocks_info[OPB_FUNC_LEAVE];

        // set the function return size
        if (opb->info->id == OPB_FUNC_RETURN)
            opb->function->return_size = 4;
    }

    // check for not empty stack
    if (stack) {
        printf("Error: Stack is not empty at the end of parsing.\n");
        return 0;
    }

    printf("Success: %i opblocks found.\n", opblocks_count);

    // success
    return 1;
}

static int qvm_load_syscalls(qvm_t *qvm)
{
    printf("Loading syscalls...");
    fflush(stdout);

    // load syscalls usage
    if (!qvm_load_syscalls_usage(qvm))
        return 0;

    // rename syscalls from map entries
    qvm_load_map_functions(qvm);

    printf("Success: %i syscalls found.\n", qvm->syscalls_count);
    return 1;
}

static int qvm_load_syscalls_usage(qvm_t *qvm)
{
    qvm_opblock_t   *opb;
    qvm_opblock_t   *call;

    // search for syscalls in opblocks
    for (opb = qvm->opblocks; opb; opb = opb->next) {
        // check if there is a call in the opblock
        if (!(call = opb_is_call(opb)))
            continue;

        // check if this is a direct call
        if (call->child->info->id != OPB_CONST)
            continue;

        // add the syscall if needed
        if (!(call->function_called = func_find(qvm, call->child->opcode->value)))
            if (!(call->function_called = func_add_syscall(qvm, call->child->opcode->value)))
                return 0;

        // add the calls and called_by
        if (call->function)
            if (!func_list_add(&call->function->calls, call->function_called) || !func_list_add(&call->function_called->called_by, call->function))
                return 0;
    }

    // success
    return 1;
}

static int qvm_load_variables(qvm_t *qvm)
{
    printf("Loading variables...");
    fflush(stdout);

    // load all the variables used in the code
    if (!qvm_load_variables_usage(qvm))
        return 0;

    // load all variables from sections length
    if (!qvm_load_variables_sections(qvm))
        return 0;

    // find all globals size
    qvm_load_variables_globals_size(qvm);

    // find all locals size
    qvm_load_variables_locals_size(qvm);

    // find all globals name from map file
    if (!qvm_load_variables_map(qvm))
        return 0;

    printf("Success: %i globals and %i locals found.\n", qvm->globals_count, qvm->locals_count);

    // success
    return 1;
}

static int qvm_load_variables_usage(qvm_t *qvm)
{
    qvm_opblock_t   *opb = qvm->opblocks;

    // search in all opblocks
    while (opb) {
        // load all variables from opblocks
        if (!opb_load_variables(qvm, opb))
            return 0;

        // go to the next opblock
        opb = opb->next;
    }

    return 1;
}

static int qvm_load_variables_sections(qvm_t *qvm)
{
    // get the data variable
    if (!var_get(qvm, NULL, 0, 0, NULL))
        return 0;

    // get the literal variable
    if (!var_get(qvm, NULL, qvm->sections[S_LIT].length, 0, NULL))
        return 0;

    // get the bss variable
    if (!var_get(qvm, NULL, qvm->sections[S_LIT].length + qvm->sections[S_BSS].length, 0, NULL))
        return 0;

    // success
    return 1;
}

static void qvm_load_variables_globals_size(qvm_t *qvm)
{
    qvm_variable_t  *var;
    
    // get the globals list
    var = qvm->globals;

    // browse all globals
    while (var) {
        // set the global size
        if (var->next)
            var->size = var->next->address - var->address;
        else
            var->size = (qvm->sections[S_DATA].length + qvm->sections[S_LIT].length + qvm->sections[S_BSS].length) - var->address;

        // go to the next global
        var = var->next;
    }
}

static void qvm_load_variables_locals_size(qvm_t *qvm)
{
    qvm_function_t  *func;
    qvm_variable_t  *var;
    
    // search in all functions
    for (unsigned int i = 0; i < qvm->functions_count; i++) {
        // get the current function
        func = &qvm->functions[i];

        // get the function locals list
        var = func->locals;

        // search in all locals variable
        while (var && var->address < func->stack_size) {
            if (var->next && var->next->address < func->stack_size)
                var->size = var->next->address - var->address;
            else
                var->size = func->stack_size - var->address;
            var = var->next;
        }

        // set default args size
        while (var) {
            var->size = 4;
            var = var->next;
        }
    }
}

static int qvm_load_variables_map(qvm_t *qvm)
{
    qvm_map_t       *map;
    qvm_variable_t  *var;

    // get the map entry list
    map = qvm->map;

    // browse all map entry
    while (map) {
        // check the section of the map entry
        switch (map->section_id) {
            // if the section is not part of data
            default:
                break;

            // rename the variable
            case S_DATA:
            case S_LIT:
            case S_BSS:
                if (!(var = var_find(qvm->globals, map->address)))
                    if (!(var = var_cut(qvm, NULL, map->address)))
                        return 0;
                var_rename(var, map->name);
                break;
        }

        // go to the next map entry
        map = map->next;
    }

    // success
    return 1;
}

static int qvm_load_returns(qvm_t *qvm)
{
    qvm_function_t  *func;
    qvm_opblock_t   *opb;
    qvm_jumppoint_t *jmp;
    unsigned int    returns_corrected = 0, jumppoints_removed = 0;
    qvm_opblock_t   *removed;

    printf("Loading returns...");
    fflush(stdout);

    // browse all functions
    for (unsigned int i = 0; i < qvm->functions_count; i++) {
        func = &qvm->functions[i];

        // check if there is a return jump point
        if (!func->opblock_end ||
            !func->opblock_end->prev ||
            !func->opblock_end->prev->prev ||
            func->opblock_end->prev->prev->function != func ||
            func->opblock_end->prev->prev->info->id != OPB_JUMP_POINT)
            continue;

        // save the jumppoint
        jmp = func->opblock_end->prev->prev->jumppoint;

        // browse all function opblocks
        opb = func->opblock_start;
        while (opb && opb != func->opblock_end) {
            if (opb->info->id == OPB_FUNC_RETURN)
                if (opb->next && opb->next->info->id == OPB_JUMP)
                    if (opb->next->jumppoint == jmp) {
                        opb->return_goto = opb->next;
                        opb->next = opb->next->next;
                        opb->next->prev = opb;
                        opb->return_goto->next = NULL;
                        opb->return_goto->prev = opb;
                        returns_corrected++;
                        if (!--jmp->parents_count) {
                            removed = func->opblock_end->prev->prev;
                            removed->prev->next = removed->next;
                            removed->next->prev = removed->prev;
                            jumppoints_removed++;
                        }
                    }
            opb = opb->next;
        }
    }

    printf("Success: %i returns corrected and %i jumppoints removed.\n", returns_corrected, jumppoints_removed);

    // success
    return 1;
}

static int qvm_load_calls(qvm_t *qvm)
{
    qvm_opblock_t   *opb;
    qvm_opblock_t   *tmp;
    qvm_opblock_t   *call;
    unsigned int    calls_total = 0, calls_restored = 0;

    printf("Loading calls...");
    fflush(stdout);

    // browse each opblocks
    for (opb = qvm->opblocks; opb; opb = opb->next) {
        // check if the opblock is an arg
        if (opb->info->id != OPB_FUNC_ARG)
            continue;

        // check if the opblock is the first arg
        if (opb->opcode->value != 8)
            continue;

        // increase the total of calls
        calls_total++;

        // go to the next opblock
        tmp = opb->next;

        // go to the first opblock after an arg
        while (tmp && tmp->info->id == OPB_FUNC_ARG)
            tmp = tmp->next;

        // check if we found an opblock
        if (!tmp)
            continue;

        // check if the opblock contain a call
        if (!(call = opb_is_call(tmp)))
            continue;
        
        // save the call function arg
        call->function_arg = opb;

        // unlink all arg from the opblocks list
        tmp->prev->next = NULL;
        opb->prev->next = tmp;
        tmp->prev = opb->prev;

        // increase the total of calls restored
        calls_restored++;

        // change the value of opb
        opb = tmp;
    }

    // save the % of restored calls
    qvm->restored_calls_perc = (float)(calls_restored * 100) / (float)calls_total;

    printf("Success: %.2f%% of calls restored.\n", qvm->restored_calls_perc);

    // success
    return 1;
}
