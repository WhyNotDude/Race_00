#include "parser.h"

char *mx_file_to_str(const char *filename) {
    
    int file = open(filename, O_RDONLY);

    if (file == -1) {
        return 0;
    }

    int len_str = 0;
    char ch;
    int ref;
    while ((ref = read(file, &ch, 1)) > 0) {
        len_str++;
    }

    char *str = mx_strnew(len_str);

    int i = 0;
    close(file);
    file = open(filename, O_RDONLY);
    while ((ref = read(file, &ch, 1)) > 0) {
        *(str + i) = ch;
        i++;    
    }
    close(file);
    return str;
}

char **mx_map_parser(const char *filename, int *w, int *h) {
    char *str = mx_file_to_str(filename);
    char **array = mx_strsplit(str, '\n', h);
    if (*h) 
        *w = strlen(array[0]) - 1;
    return array;
}

t_point *mx_parse_point(char *coordinates) {
    int tmp;
    t_point *point = (t_point *)malloc(sizeof(t_point));

    char **xy = mx_strsplit(coordinates, ',', &tmp);
    point->x = atoi(xy[0]);
    point->y = atoi(xy[1]);
    return point;
}

// type:x,y:x1,y1;x2,y2;...{\n}
t_map *mx_level_parser(const char *map_file, const char *meta_file) {
    t_map *map = (t_map *)malloc(sizeof(t_map));

    map->array = mx_map_parser(map_file, &(map->w), &(map->h));

    char *str = mx_file_to_str(meta_file);

    char **rules = mx_strsplit(str, '\n', &(map->triggers_count));

    map->triggers =
        (t_trigger **)malloc(sizeof(t_trigger *) * map->triggers_count);

    int tmp;
    for (int i = 0; i < map->triggers_count; i++) {
        char **operands = mx_strsplit(rules[i], ':', &tmp);
        map->triggers[i] = (t_trigger *)malloc(sizeof(t_trigger));
        map->triggers[i]->type = *operands[0];
        map->triggers[i]->point = mx_parse_point(operands[1]);
        char **children =
            mx_strsplit(operands[2], ';', &(map->triggers[i]->child_count));
        map->triggers[i]->children = (t_point **)malloc(
            sizeof(t_point *) * map->triggers[i]->child_count);
        for (int j = 0; j < map->triggers[i]->child_count; j++) {
            map->triggers[i]->children[j] = mx_parse_point(children[j]);
        }
    }
    return map;
}
