#include "qvmd.h"

qvm_map_t   *map_new(void);

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
