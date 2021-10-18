#include "way_header.h"

void t_free(t_map *res) {   
    for (int i = 0; i < res->row; i++) {
        free(res->array[i]);
        res->array[i] = NULL;
    }
    free(res->array);
    res->array = NULL;
    free(res);
    res = NULL;
}
