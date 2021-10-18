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


int main(int argc, char const *argv[]) {

    validator(argc, argv);
    t_map *res = parser(argv[1]);

    path_markup(res, argv);

    t_vector2 entry, exit;
    entry.x = mx_atoi(argv[2]); entry.y = mx_atoi(argv[3]);
    exit.x = mx_atoi(argv[4]); exit.y = mx_atoi(argv[5]);

    printerr(res);
    printf("\n");
    int dist = 0;
    int length = path_finder(res, entry, exit, &dist);
    dist_finder(res, dist);
    printerr(res);
    printf("dist=%d\nexit=%d\n", dist, length);

    t_free(res);
    printf("end");

    return 0;
}
