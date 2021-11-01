#ifndef MAP_H
#define MAP_H

typedef struct qvm_map_s        qvm_map_t;

#include "qvm.h"

typedef struct qvm_map_s {
    unsigned int    section_id;
    unsigned int    address;
    char            name[64];
    qvm_map_t       *next;
} qvm_map_t;

qvm_map_t   *map_new(void);

#endif