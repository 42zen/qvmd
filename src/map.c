#include "qvmd.h"

qvm_map_t   *map_new(void);

qvm_map_t *map_new(void)
{
    static qvm_map_t    map;

    // set the default map entry values
    map.section_id = -1;
    map.address = 0;
    *map.name = 0;
    map.next = NULL;

    // return the new map entry
    return &map;
}
