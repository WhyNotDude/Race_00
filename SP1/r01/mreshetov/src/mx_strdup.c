#include "header.h"

char *mx_strdup(const char *str)
{
    int length = mx_strlen(str);
    char *new = mx_strnew(length);
    mx_strcpy(new, str);

    return new;
}
