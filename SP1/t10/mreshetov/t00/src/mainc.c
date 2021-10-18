#include "header.h"

int main(int argc, char *argv[]){
    if (argc != 2){
    mx_printerr("usage: ./read_file [file_path]\n");
    return 0;
    }

    int file;

    if ((file = open(argv[1], O_RDONLY)) == -1){
        mx_printerr ("error\n");
    }

    char buf;
    int size;

    while((size = read(file,&buf,1)) > 0){
        write(1,&buf,1);
    }



    if(close(file) < 0){
        mx_printerr ("error\n");
        return 0;
    }

 return 0;   
}

