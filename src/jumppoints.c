#include "qvmd.h"

static qvm_jumppoint_t  *jumppoint_new(void);
qvm_jumppoint_t         *jumppoint_find(qvm_t *qvm, unsigned int address);
int                     jumppoint_add(qvm_t *qvm, unsigned int address);

qvm_jumppoint_t *jumppoint_new(void)
{
    qvm_jumppoint_t *jmp;

    // allocate a new jumppoint
    if (!(jmp = malloc(sizeof(*jmp)))) {
        printf("Error: Couldn't allocate more jumppoint.\n");
        return NULL;
    }

    // initialize the jumppoint infos
    jmp->address = 0;
    *jmp->name = 0;
    jmp->parents_count = 0;
    jmp->next = NULL;

    // return the jumppoint
    return jmp;
}

qvm_jumppoint_t *jumppoint_find(qvm_t *qvm, unsigned int address)
{
    qvm_jumppoint_t *jmp;

    // find the jumppoint that have the same address
    for (jmp = qvm->jumppoints; jmp; jmp = jmp->next)
        if (jmp->address == address)
            return jmp;

    // we didn't find it
    return NULL;
}

int jumppoint_add(qvm_t *qvm, unsigned int address)
{
    qvm_jumppoint_t *jmp;
    char            added = 0;

    // check if the jumppoint already exist
    if (!(jmp = jumppoint_find(qvm, address))) {
        // create a new jumppoint
        if (!(jmp = jumppoint_new()))
            return 0;
        added = 1;
    }

    // increase the parents count
    jmp->parents_count++;

    // set the jumppoint infos if needed
    if (added) {
        jmp->address = address;
        sprintf(jmp->name, "jmp_%x", address);
        jmp->next = qvm->jumppoints;
        qvm->jumppoints = jmp;
    }

    // success
    return 1;
}
