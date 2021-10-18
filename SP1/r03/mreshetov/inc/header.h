#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>

typedef struct s_vector2{
    int x;
    int y;
} t_vector2;

typedef struct s_screen{
    t_vector2 *scale;
    char **array;
} t_screen;

void mx_printchar(char c);
char **mem_alloc(t_vector2 scale);
void str_del(char **c, t_vector2 scale);
char mx_random_char();
void output(t_screen scr);
void mx_cleanarr(t_screen* screen);
void generate_frame(t_screen * screen);
