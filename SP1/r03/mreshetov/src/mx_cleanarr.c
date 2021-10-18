#include "header.h"

void mx_cleanarr(t_screen* screen){
    for(int y = 0; y < screen->scale->y; y++){
        for(int x = 0; x < screen->scale->x; x++){
            screen->array[y][x] = ' ';
        }
    }
}


