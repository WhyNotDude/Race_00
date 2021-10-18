#include "header.h"

void mx_strerrout(char *s1, char *s2){
    char *answer = mx_strjoin(s1, s2);
            char *error = mx_strjoin(answer, "\n");

            mx_strdel(&answer);
            mx_printerr(error);
            mx_strdel(&error);
            
            exit (-1);
}

