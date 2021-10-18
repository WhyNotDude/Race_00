
#include "header.h"

char *mx_strint(const char *s, int c, int *index){

    while (s[*index] != 0){

        if (s[*index] == c){
        return (char *) &s[*index];
        }
        *index = *index - 1;
    }
    return 0;
}
