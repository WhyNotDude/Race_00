#include "header.h"
int main(int argc, char *argv[]) {
    if (argc != 3) {
        mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
        exit(0);
    }

    int file1 = open(argv[1], O_RDONLY);
    int file2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
 
    if (file1 < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        exit(0);
    }

    int size;
    char buf;

    while((size = read(file1,&buf,1)) > 0){
        write(file2,&buf,1);
    }

    if (close(file1) < 0) {
        mx_printerr("error\n");
        exit(0);
    }
    if (close(file2) < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    return 0;
}
