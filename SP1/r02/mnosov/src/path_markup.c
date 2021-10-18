#include "way_header.h"

void printerr(t_map *array) {
    for (int i = 0; i < array->row; i++) {
        for (int j = 0; j < array->column; j++) {
            printf("%d\t", array->array[i][j]);
        }
        printf("\n");
    }
}


void path_markup(t_map *array, char const *argv[]) {


    int x_start = mx_atoi(argv[3]);
    int y_start = mx_atoi(argv[2]);

    int x_end = mx_atoi(argv[5]);
    int y_end = mx_atoi(argv[4]);

    if (x_start > array->row || x_end > array->row
        || y_start > array->column || y_end > array->column) {
        mx_printerr("points are out of map range\n");
        exit(1);
    }
    //exit point cannot be an obstacle
    if (array->array[x_start][y_start] != -1) {
        mx_printerr("entry point cannot be an obstacle\n");
        exit(1);
    }
    if (array->array[x_end][y_end] != -1) {
        mx_printerr("exit point cannot be an obstacle\n");
        exit(1);
    }
    array->array[x_start][y_start] = 0;
    for (int k = 0; k < array->column * array->row + 1; k++) {
        for (int i = 1; i < array->row - 1; i++) {
            for (int j = 1; j < array->column - 1; j++) {
                if (array->array[i][j] >= 0  && array->array[i + 1][j] == -1) {
                    array->array[i + 1][j] = array->array[i][j] + 1;
                }
                if (array->array[i][j] >= 0  && array->array[i - 1][j] == -1) {
                    array->array[i - 1][j] = array->array[i][j] + 1;
                }
                if (array->array[i][j] >= 0 && array->array[i][j + 1] == -1) {
                    array->array[i][j + 1] = array->array[i][j] + 1;
                }
                if (array->array[i][j] >= 0 && array->array[i][j - 1] == -1) {
                    array->array[i][j - 1] = array->array[i][j] + 1;
                }
            }
        }
    }
}
