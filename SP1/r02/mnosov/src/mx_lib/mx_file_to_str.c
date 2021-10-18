#include "way_header.h"

char *mx_file_to_str(const char *filename) {
    
    int file = open(filename, O_RDONLY);

    if (file == -1) {
        return 0;
    }

    int len_str = 0;
    int ref;
    char ch;

    while ((ref = read(file, &ch, 1)) > 0) {
        len_str++;
    }

    char *str = mx_strnew(len_str);

    int i = 0;
    close(file);
    file = open(filename, O_RDONLY);
    ref = 1;
    while ((ref = read(file, &ch, 1)) > 0) {
        *(str + i) = ch;
        i++;    
    }
    close(file);
    return str;
}
