#include "header.h"

char **mem_alloc(t_vector2 scale){
    char **c = (char **) malloc(scale.y * (sizeof(char *)));
    for (int i = 0; i < scale.y; i++){
        c[i] = malloc (scale.x);
    }

    return c;
}


void str_del(char **c, t_vector2 scale){
    for (int i = 0; i < scale.y; i++){
        char *temp = c[i];
        free(temp);
    }
    free(c);
    *c = NULL;
}
