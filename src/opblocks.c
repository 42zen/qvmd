#include "qvmd.h"

qvm_opblock_t           *opb_new(void);
void                    opb_free(qvm_opblock_t *opb);
void                    opb_push(qvm_opblock_t *opb, qvm_opblock_t **list);
qvm_opblock_t           *opb_pop(qvm_opblock_t **list);
void                    opb_add(qvm_opblock_t *opb, qvm_opblock_t **list);
void                    opb_print(file_t *file, qvm_opblock_t *opb);
static qvm_opblock_t    *opb_load(qvm_opblock_t *opb, unsigned int size);
qvm_opblock_t           *opb_is_call(qvm_opblock_t *opb);
int                     opb_foreach(qvm_t *qvm, int (*func)(qvm_t *, qvm_opblock_t *));

qvm_opblock_info_t  qvm_opblocks_info[OPB_MAX] = {
	{ OPB_UNDEF, 0 },
	{ OPB_FUNC_ENTER, OPB_F_BLOCK_ADD },
	{ OPB_FUNC_RETURN, OPB_F_STACK_POP | OPB_F_BLOCK_ADD },
	{ OPB_FUNC_LEAVE, OPB_F_STACK_POP | OPB_F_BLOCK_ADD },
	{ OPB_FUNC_ARG, OPB_F_STACK_POP | OPB_F_BLOCK_ADD },
	{ OPB_FUNC_CALL, OPB_F_STACK_POP | OPB_F_STACK_PUSH },
	{ OPB_PUSH, OPB_F_STACK_PUSH },
	{ OPB_POP, OPB_F_STACK_POP | OPB_F_BLOCK_ADD },
	{ OPB_CONST, OPB_F_STACK_PUSH },
	{ OPB_GLOBAL_ADR, OPB_F_STACK_PUSH },
	{ OPB_GLOBAL, OPB_F_STACK_PUSH },
	{ OPB_LOCAL_ADR, OPB_F_STACK_PUSH },
	{ OPB_LOCAL, OPB_F_STACK_PUSH },
	{ OPB_JUMP, OPB_F_STACK_POP | OPB_F_BLOCK_ADD },
    { OPB_COMPARE, OPB_F_STACK_2POP | OPB_F_BLOCK_ADD },
	{ OPB_LOAD, OPB_F_STACK_POP | OPB_F_STACK_PUSH },
	{ OPB_ASSIGNATION, OPB_F_STACK_2POP | OPB_F_BLOCK_ADD },
	{ OPB_STRUCT_COPY, OPB_F_STACK_2POP | OPB_F_BLOCK_ADD },
	{ OPB_OPERATION, OPB_F_STACK_POP | OPB_F_STACK_PUSH },
	{ OPB_DOUBLE_OPERATION, OPB_F_STACK_2POP | OPB_F_STACK_PUSH },
	{ OPB_JUMP_POINT, 0 },
	{ OPB_JUMP_ADDRESS, OPB_F_STACK_PUSH },
    { OPB_TYPE_CONVERSION, OPB_F_STACK_POP | OPB_F_STACK_PUSH }
};

qvm_opblock_t *opb_new(void)
{
    qvm_opblock_t   *opb;

    // allocate a new opblock
    if (!(opb = malloc(sizeof(*opb)))) {
        printf("Error: Couldn't allocate new opblock.\n");
        return NULL;
    }

    // initialize the opblock infos
    opb->info = NULL;
    opb->opcode = NULL;
    opb->prev = NULL;
    opb->next = NULL;
    opb->child = NULL;
    opb->op1 = NULL;
    opb->op2 = NULL;
    opb->function = NULL;
    opb->opcodes = NULL;
    opb->opcodes_count = 0;
    opb->function_called = NULL;
    opb->jumppoint = NULL;
    opb->variable = NULL;
    opb->return_goto = NULL;
    opb->function_arg = NULL;

    // return the opblock
    return opb;
}

void opb_push(qvm_opblock_t *opb, qvm_opblock_t **list)
{
    // push opb to the top of the list
    opb->next = *list;
    *list = opb;
}

qvm_opblock_t *opb_pop(qvm_opblock_t **list)
{
    qvm_opblock_t   *opb;

    // remove opb from the list
    opb = *list;
    *list = opb->next;

    // check for an empty stack
    if (!opb)
        printf("Error: Trying to pop an opblock from an empty stack.\n");

    // return the removed opb
    return opb;
}

void opb_add(qvm_opblock_t *opb, qvm_opblock_t **list)
{
    // add opb to the end of the list
    if (*list) {
        (*list)->next = opb;
        opb->prev = *list;
    }
    *list = opb;
}

void opb_free(qvm_opblock_t *opb)
{
    qvm_opblock_t   *next;

    // free opb if needed
    if (opb) {
        next = opb->next;
        free(opb);
        opb_free(next);
    }
}

void opb_print(file_t *file, qvm_opblock_t *opb)
{
    qvm_opblock_t   *tmp;
    qvm_variable_t  *var;

    switch (opb->info->id) {
        // do nothing
        case OPB_UNDEF:
        case OPB_PUSH:
            break;

        // print a function start
        case OPB_FUNC_ENTER:
            if (opb->function->return_size == 4)
                file_print(file, "int ");
            else
                file_print(file, "void ");
            file_print(file, "%s(", opb->function->name);
            var = opb->function->locals;
            while (var && var->address < opb->function->stack_size)
                var = var->next;
            if (var) {
                while (var) {
                    if (var->address > opb->function->stack_size + 8)
                        file_print(file, ", ");
                    file_print(file, "int %s", var->name);
                    var = var->next;
                }
            } else
                file_print(file, "void");
            file_print(file, ") {");
            break;

        // print a function stop
        case OPB_FUNC_LEAVE:
            file_print(file, "}");
            break;

        // print a function return
        case OPB_FUNC_RETURN:
            file_print(file, "return ");
            opb_print(file, opb->child);
            break;

        // print a raw call argument
        case OPB_FUNC_ARG:
            file_print(file, "#define next_call_arg_%i \"", (opb->opcode->value - 8) / 4);
            opb_print(file, opb->child);
            file_print(file, "\"", opb->opcode->value);
            break;

        // call a function
        case OPB_FUNC_CALL:
            if (opb->function_called) {
                file_print(file, "%s(", opb->function_called->name);
            }
            else {
                file_print(file, "(*(");
                opb_print(file, opb->child);
                file_print(file, "))(");
            }
            tmp = opb->function_arg;
            while (tmp && tmp->info->id == OPB_FUNC_ARG) {
                if (tmp != opb->function_arg)
                    file_print(file, ", ");
                opb_print(file, tmp->child);
                tmp = tmp->next;
            }
            file_print(file, ")");
            break;

        // pop the stack
        case OPB_POP:
            opb_print(file, opb->child);
            break;

        // add a constant to the stack
        case OPB_CONST:
            file_print(file, "0x%x", opb->opcode->value);
            break;

        // add a local or global address to the stack
        case OPB_LOCAL_ADR:
        case OPB_GLOBAL_ADR:
            if (opb->variable->size == 1 || opb->variable->size == 2 || opb->variable->size == 4)
                file_print(file, "&%s", opb->variable->name);
            else
                file_print(file, "%s", opb->variable->name);
            break;

        // add a local or global variable to the stack
        case OPB_LOCAL:
        case OPB_GLOBAL:
            file_print(file, "%s", opb->variable->name);
            break;

        // jump to a jumppoint
        case OPB_JUMP:
            file_print(file, "goto ");
            opb_print(file, opb->child);
            break;

        // compare the stack
        case OPB_COMPARE:
            file_print(file, "if (");
            opb_print(file, opb->op2);
            file_print(file, " %s ", opb->opcode->info->operation);
            opb_print(file, opb->op1);
            file_print(file, ") goto %s", opb->jumppoint->name);
            break;

        // load the stack
        case OPB_LOAD:
            if ((tmp = opb_load(opb->child, opb->opcode->value))) {
                opb_print(file, tmp);
            }
            else {
                if (opb->opcode->value == 1)
                    file_print(file, "*(char *)");
                else if (opb->opcode->value == 2)
                    file_print(file, "*(short *)");
                else if (opb->opcode->value == 4)
                    file_print(file, "*(int *)");
                opb_print(file, opb->child);
            }
            break;

        // assign the stack
        case OPB_ASSIGNATION:
            if ((tmp = opb_load(opb->op2, opb->opcode->value))) {
                opb_print(file, tmp);
            }
            else {
                if (opb->opcode->value == 1)
                    file_print(file, "*(char *)");
                else if (opb->opcode->value == 2)
                    file_print(file, "*(short *)");
                else if (opb->opcode->value == 4)
                    file_print(file, "*(int *)");
                opb_print(file, opb->op2);
            }
            file_print(file, " = ");
            opb_print(file, opb->op1);
            break;

        // structure copy from the stack
        case OPB_STRUCT_COPY:
            file_print(file, "block_copy(");
            opb_print(file, opb->op1);
            file_print(file, ", ");
            opb_print(file, opb->op2);
            file_print(file, ", 0x%x)", opb->opcode->value);
            break;

        // single operation to stack
        case OPB_OPERATION:
        case OPB_TYPE_CONVERSION:
            file_print(file, "%s", opb->opcode->info->operation);
            opb_print(file, opb->child);
            break;

        // double operation to stack
        case OPB_DOUBLE_OPERATION:
            file_print(file, "(");
            opb_print(file, opb->op2);
            file_print(file, " %s ", opb->opcode->info->operation);
            opb_print(file, opb->op1);
            file_print(file, ")");
            break;

        // jumppoint
        case OPB_JUMP_POINT:
            file_print(file, "%s:", opb->jumppoint->name);
            break;

        // jump address
        case OPB_JUMP_ADDRESS:
            file_print(file, "%s", opb->jumppoint->name);
            break;

        // default error
        default:
            printf("Error: Unsupported block type.\n");
            break;
    }
}

qvm_opblock_t *opb_load(qvm_opblock_t *opb, unsigned int size)
{
    static qvm_opblock_t    loaded;

    if (opb->info->id == OPB_LOCAL_ADR) {
        if (opb->variable->size == size) {
            memcpy(&loaded, opb, sizeof(*opb));
            loaded.info = &qvm_opblocks_info[OPB_LOCAL];
            return &loaded;
        }
    }
    if (opb->info->id == OPB_GLOBAL_ADR) {
        if (opb->variable->size == size) {
            memcpy(&loaded, opb, sizeof(*opb));
            loaded.info = &qvm_opblocks_info[OPB_GLOBAL];
            return &loaded;
        }
    }
    return NULL;
}

qvm_opblock_t *opb_is_call(qvm_opblock_t *opb)
{
    qvm_opblock_t   *call;

    // if we found the call return it
    if (opb->info->id == OPB_FUNC_CALL)
        return opb;
    
    // check the child if any
    if (opb->child)
        return opb_is_call(opb->child);

    // check the op1 if any
    if (opb->op1)
        if ((call = opb_is_call(opb->op1)))
            return call;

    // check the op2 if any
    if (opb->op2)
        return opb_is_call(opb->op2);

    // we didn't find it
    return NULL;
}

int opb_foreach(qvm_t *qvm, int (*func)(qvm_t *, qvm_opblock_t *))
{
    qvm_opblock_t   *opb;

    // call the function given for each opblocks
    for (opb = qvm->opblocks; opb; opb = opb->next)
        if (!func(qvm, opb))
            return 0;

    // success
    return 1;
}
