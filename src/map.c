#include "qvmd.h"

qvm_map_t   *map_new(void);
int         map_foreach(qvm_t *qvm, int (*func)(qvm_t *, qvm_map_t *));

qvm_map_t *map_new(void)
{
    qvm_map_t   *map;

    // allocate the map entry
    if (!(map = malloc(sizeof(*map)))) {
        printf("Error: Couldn't allocate new map entry.\n");
        return NULL;
    }

    // set the default map entry values
    map->section_id = -1;
    map->address = 0;
    *map->name = 0;
    map->next = NULL;

    // return the new map entry
    return map;
}

int map_foreach(qvm_t *qvm, int (*func)(qvm_t *, qvm_map_t *))
{
    qvm_map_t   *map;

    // browse all map entry
    for (map = qvm->map; map; map = map->next)
        if (!func(qvm, map))
            return 0;

    // success
    return 1;
}
