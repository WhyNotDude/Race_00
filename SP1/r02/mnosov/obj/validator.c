#include "way_header.h"


static void check_argc_len(int argc);
static void check_argv_int(int argc, char const *argv[]);
static void check_rectangular(const char *namefile);

void validator(int argc, char const *argv[]) {
    int errno;

    //  check argc 
    check_argc_len(argc);

    // check integer variable
    check_argv_int(argc, argv);


    //check mapfile

    int file = open(argv[1], O_RDONLY);

    if (errno)  {
        mx_printerr("map does not exist\n");
        close(file);
        exit(1);
    } 


    int ref;
    char ch;

    int size_file = 0;    



    while ((ref = read(file, &ch, 1)) > 0) {
        size_file++;
        if (ch !=  '#') {
            if (ch != '.') {
                if (ch != ',') {
                    if (ch != '\n') {
                        mx_printerr("map error\n");
                        close(file);
                        exit(1);
                    }
                }
            } 
        } 
    }

    if (size_file == 0) {
        mx_printerr("map does not exist\n");
        close(file);
        exit(1);
    }
    if (errno)  {
        mx_printerr("map error\n");
        exit(1);
    }

    close(file);

    // check rentagular
    check_rectangular(argv[1]);
}


static void check_argc_len(int argc) {
    if (argc != 6) {
        mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n");
        exit(1);
    }
    return;
}


static void check_argv_int(int argc, char const *argv[]) {
    int err = 0;
    for (int i = 2; i < argc; i++) {
        if (mx_atoi_err(argv[i], &err) < 0) {
            mx_printerr("points are out of map range\n");
            exit(1);
        }
        if (err) {
            mx_printerr("error\n");
            exit(1);
        }
    }
    return;
}


static void check_rectangular(const char *namefile) {
    int file = open(namefile, O_RDONLY);

    if (errno)  {
        mx_printerr("map does not exist\n");
        close(file);
        exit(1);
    } 

    char ch;
    int ref;
    int first_row = 0;
    int size_file = 0;
    int table = 0;

    while ((ref = read(file, &ch, 1)) > 0 && ch != '\n') {
        first_row++;
    }

    size_file += first_row;
    while ((ref = read(file, &ch, 1)) > 0) { 
        if (ch == '\n') {
            table++;
        }
        else {
            size_file++;
        }
    }
    table++;
    if (first_row * table != size_file) {
        mx_printerr("map error\n");
        close(file);
        exit(1);
    }
    
    close(file);
}
