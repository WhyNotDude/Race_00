#include "header.h"

void generate_frame(t_screen * screen){
    int chance_a = 20;
    int chance_b = 15;

    // First stadia taking snakes down

    for (int y = screen->scale->y - 2; y >= 0; y--){
        for(int x = 0; x < screen->scale->x; x++){
            if (screen->array[y][x] != ' ' && screen->array[y+1][x] == ' '){
                screen->array[y+1][x] = mx_random_char();
            }
        }
    }

    // Second stadia creating heads of snakes

    for (int x = 0; x < screen->scale->x; x++){
        if(((rand()%chance_a) == 0) && screen->array[0][x] == ' ')
        screen->array[0][x] = mx_random_char();
    }

    // Third stadia taking snakes tails down

    for (int y = screen->scale->y - 1; y > 0; y--){
        for(int x = 0; x < screen->scale->x; x++){
            if(screen->array[y][x] != ' ' && screen->array[y-1][x] == ' ')
            screen->array[y][x] = ' ';
        }
    }

    // Fourth stadia cutting off snakes tails

    for (int x = 0; x < screen->scale->x; x++){
        if(((rand()%chance_b) == 0) && screen->array[0][x] != ' '){
            screen->array[0][x] = ' ';
        }
    }
}
