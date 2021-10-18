#include "header.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        int size;
        char buf;
        size = read(0, &buf, 1);
        while (size) {
            write(1, &buf, 1);
            size = read(0, &buf, 1);
        }
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        int file1 = open(argv[i], O_RDONLY);
        int size;
        char buf;
        if (file1 < 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": No such file or directory\n");
            exit(0);
        }
        
        while((size = read(file1,&buf,1)) > 0){
        write(1,&buf,1);
    }
        if (close(file1) < 0) {
            mx_printerr("error\n");
            exit(0);
        }
    }
    return 0;
}
