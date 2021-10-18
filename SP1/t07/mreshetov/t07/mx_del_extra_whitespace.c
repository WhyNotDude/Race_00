#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
bool mx_isspace(char c);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str)
{
    if (str == NULL)
        return NULL;
    char *trimmed = mx_strtrim(str);
    int pointer = 0;
    int current = 0;
    while (trimmed[pointer])
    {
        trimmed[current++] = trimmed[pointer++];
        if (!mx_isspace(trimmed[pointer]))
            continue;
        while (mx_isspace(trimmed[pointer]))
            pointer++;
        trimmed[current++] = ' ';
    }
    trimmed[current] = '\0';
    char *result = mx_strncpy(mx_strnew(current), trimmed, current);
    mx_strdel(&trimmed);
    return result;
}

int main()
{
    char str[] = "  My name... \t   is   Neo  ";

    printf("%s", mx_del_extra_whitespaces(str));

    return 0;
}
