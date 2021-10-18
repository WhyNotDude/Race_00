#include "way_header.h"

void path_to_file(t_map *path) {
    char *str = mx_strnew(path->column * path->row + path->column);
    printf("%s\n", str);
    
    int k = 0;
    for (int i = 0; i < path->row; i++) {
        for (int j = 0; j < path->column; j++) {
            // if (path->array[i][j] == -6) {
                
            //     //str[i * (path->row + 1) * 2 + j * 2] = '*';
            // }

            switch (path->array[i][j])
            {
            case -6:
                str[i * (path->row + 1) + j + k] = '*';
                break;
            case -2:
                str[i * (path->row + 1) + j + k] = '#';
                break;
            
            case -4:
                str[i * (path->row + 1) + j + k] = 'D';
                break;
            
            case -1:
                str[i * (path->row + 1) + j + k] = '.';
                break;

            case -5:
                str[i * (path->row + 1) + j + k] = 'X';
                break;
            default:
                str[i * (path->row + 1) + j + k] = '.';
                break;
            }
        }
        str[i * (path->row + 1) + path->column + k] = '\n';
        k++;
    }
    
    printf("%s", str);
    int path_file = open("path.txt",  O_CREAT | O_WRONLY | O_TRUNC, 0644);

    write(path_file, str, mx_strlen(str));

    free(str);
    close(path_file);
    
}
