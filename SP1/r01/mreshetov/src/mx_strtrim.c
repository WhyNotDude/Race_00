#include "header.h"

char *mx_strtrim(const char *str)
{
    if (str == NULL)
        return NULL;
    while (mx_isspace(*str))
        str++;
    int len = mx_strlen(str);
    while (mx_isspace(str[len - 1]))
        len--;
    return mx_strncpy(mx_strnew(len), str, len);
}
