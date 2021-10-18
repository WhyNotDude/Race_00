#include <unistd.h>

void mx_printchar(char c){
    char str[1];
    str[0] = c;
    write (1, str, 1);
}
