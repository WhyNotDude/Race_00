#include "header.h"

char *mx_strchr(const char *s, int c){
    int i = mx_strlen(s) - 1;

    while (s[i] != 0){

        if (s[i] == c){
        return (char *) &s[i];
        }
        i--;
    }
    return 0;
}


