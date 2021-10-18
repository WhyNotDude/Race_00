#include "way_header.h" 

static int row_count(char *str) {
    int i = 0;
    int row = 0;
    while (*(str + i) != '\0') {
        if (*(str + i) == '\n') {
            row++;
        }
        i++;
    }
    return row;
}

static int column_count(char *str) {
    int i = 0;
    int column = 0;
    while (*(str + i) != '\0') {
        if (*(str + i) == '\n') {
            break;
        }
        else if (*(str + i) != ',') {
            column++;
        }
        i++;
    }
    return column;
}

static int** create_array(int row, int column) {
    int **array = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++) {
        array[i] = (int*)malloc(column * sizeof(int));
    }
    return array;
}

static void fill_array(t_map *result, char *str) {
    int k = 0;
    for (int i = 0; i < result->row; i++) {
        for (int j = 0; j < result->column; j++) {
            if(str[k] == ',') {
                k++;
            }
            if (str[k] == '#') {
                result->array[i][j] = -2;
            }
            else if (str[k] == '.'){
            result->array[i][j] = -1; 
            }
            k++;
        }
        k++;
    }
}


t_map *parser(const char *filename) {
    
    t_map *result = (t_map *)malloc(sizeof(t_map *));
    
    char *str = mx_file_to_str(filename);
    result->row = row_count(str);
    result->column = column_count(str);
    
    result->array = create_array(result->row, result->column);
    
    fill_array(result, str);

    free(str);
    return result;
}

