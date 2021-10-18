#include "way_header.h"

/*
* EMPTY - -1;
* WALL - -2;
* BEGIN - 0;
* END - -3;
* DIST - -4;
* X - -5;
* * - -6;
*/



int path_finder(t_map* map, t_vector2 entry, t_vector2 exit, int* dist){

    *dist = 0;

    for(int i = 0; i < map->row; i++){
        for(int j = 0; j < map->column;j++){
            if (map->array[i][j] > *dist){
                *dist = map->array[i][j];
            }
        }
    }

    //zero way
    if (entry.x == exit.x && entry.y == exit.y){
        map->array[entry.y][entry.x] = -6;
        return 0;
    }

    printf("x: %d ",map->array[entry.y][entry.x]);

    int is_over = 0;

     for (int iter = 0; (iter < map->column * map->row) && !is_over; iter++){

        int is_stuck = 0;
        t_vector2 cur = entry;

        for (int jiter = 0; (jiter < map->column * map->row) && !is_stuck; jiter++){
            if(cur.y+1 < map->row &&
            map->array[cur.y+1][cur.x] == map->array[cur.y][cur.x] + 1){
                cur.y++;
            } else 
            if (cur.x-1 >= 0 &&
            map->array[cur.y][cur.x-1] == map->array[cur.y][cur.x] + 1){
                cur.x--;
            } else 
            if (cur.y-1 >= 0 &&
            map->array[cur.y-1][cur.x] == map->array[cur.y][cur.x] + 1){
                cur.y--;
            } else
            if (cur.x+1 < map->column &&
            map->array[cur.y][cur.x+1] == map->array[cur.y][cur.x] + 1){
                cur.x++;
            } else {
                is_stuck = 1;
                map->array[cur.y][cur.x] = -1; 
                printerr(map);
                printf("\n");
            }

            if(cur.x == exit.x && cur.y == exit.y) {
                int answer = path_marker(map, entry, exit);
                if(answer == *dist){
                    map->array[cur.y][cur.x] = -5;
                }
                return answer;
            }
        }
    }
    return -2;
}


int path_marker(t_map* map, t_vector2 entry, t_vector2 exit)
{   

    int is_over = 0;
    t_vector2 prev;
    int iter;
    for (iter = 0; (iter < map->column * map->row) && !is_over; iter++){

        int is_stuck = 0;
        t_vector2 cur = entry;

        for (int jiter = 0; (jiter < map->column * map->row) && !is_stuck; jiter++){
            if(cur.y+1 < map->row &&
            map->array[cur.y+1][cur.x] == map->array[cur.y][cur.x] + 1){
                prev.x = cur.x; prev.y = cur.y;
                cur.y++;
            } else 
            if (cur.x-1 >= 0 &&
            map->array[cur.y][cur.x-1] == map->array[cur.y][cur.x] + 1){
                prev.x = cur.x; prev.y = cur.y;
                cur.x--;
            } else 
            if (cur.y-1 >= 0 &&
            map->array[cur.y-1][cur.x] == map->array[cur.y][cur.x] + 1){
                prev.x = cur.x; prev.y = cur.y;
                cur.y--;
            } else
            if (cur.x+1 < map->column &&
            map->array[cur.y][cur.x+1] == map->array[cur.y][cur.x] + 1){
                prev.x = cur.x; prev.y = cur.y;
                cur.x++;
            }
            
            map->array[prev.y][prev.x] = -6;

            if(cur.x == exit.x && cur.y == exit.y){
                map->array[cur.y][cur.x] = -6;
                return jiter+1;
            }
        }
    }
    return 0;
}

void dist_finder(t_map *map, int dist){
    for(int i = 0; i < map->row; i++){
        for(int j = 0; j < map->column;j++){
            if (map->array[i][j] == dist){
                map->array[i][j] = -4;
            }
        }
    }
}
