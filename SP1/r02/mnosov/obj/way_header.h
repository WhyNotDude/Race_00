#ifndef WAY_HOME_H
#define WAY_HOME_H


#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_map{
    int row;
    int column;
    int **array;
}           t_map;

typedef struct s_vector2{
    int x;
    int y;
} t_vector2;

//FUNC
void validator(int argc, char const *argv[]);
void path_markup(t_map *array, char const *argv[]);
int path_finder(t_map* map, t_vector2 entry, t_vector2 exit, int* dist);
t_map *parser(const char *filename);
int path_marker(t_map* map, t_vector2 entry, t_vector2 exit);
void printerr(t_map *array);
void dist_finder(t_map *map, int dist);

void t_free(t_map *res);
//MX_FUNC
int mx_strlen(const char *s);
void mx_printerr(const char *s);
bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str);
int mx_atoi_err(const char *str, int *err);
char *mx_file_to_str(const char *filename);
char *mx_strnew(const int size);

#endif /* WAY_HOME_H */

/*
* EMPTY - -1;
* WALL - -2;
* BEGIN - 0;
* END - -3;
* DIST - -4;
* X - -5;
* * - -6;
*/

