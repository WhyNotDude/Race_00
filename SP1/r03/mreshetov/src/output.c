#include "header.h"

void output(t_screen scr) {
    for (int y = 0; y < scr.scale->y; y++)
    {
        for (int x = 0; x < scr.scale->x; x++)
        {
            printf("%c", scr.array[y][x]);
        }
    }
}
