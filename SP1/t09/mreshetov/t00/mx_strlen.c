#include "printerr.h"

int mx_strlen(const char *s){
int length = 0, i = 0;
    if (s[0] == '\0'){
        length = -1;
    } 
    else {
        i = length = 1;
        while(s[i+1] != '\0') { i++; }
    }
    length = i + 1;
    return length;
}


