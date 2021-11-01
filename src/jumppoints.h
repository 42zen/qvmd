#ifndef JUMPPOINTS_H
#define JUMPPOINTS_H

typedef struct qvm_jumppoint_s  qvm_jumppoint_t;

typedef struct qvm_jumppoint_s {
    unsigned int    address;
    char            name[32];
    int             parents_count;
    qvm_jumppoint_t *next;
} qvm_jumppoint_t;

qvm_jumppoint_t *jumppoint_find(qvm_t *qvm, unsigned int address);
int             jumppoint_add(qvm_t *qvm, unsigned int address);

#endif
