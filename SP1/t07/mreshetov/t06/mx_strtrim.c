#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
bool mx_isspace(char c);

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

int main()
{
    char str[] = "  My name...    is   Neo  ";

    printf("%s", mx_strtrim(str));

    return 0;
}
