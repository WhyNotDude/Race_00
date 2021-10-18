#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr)
{
    char **a = *arr;
    while (*a)
        mx_strdel(a++);
    free(*arr);
}
