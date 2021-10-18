#include "header.h"

char *mx_strjoin(char const *s1, char const *s2)
{
    if (s1 == NULL && s2 == NULL)
        return NULL;
    if (s1 == NULL)
        return (char *)s2;
    if (s2 == NULL)
        return (char *)s1;

    char *ans = mx_strnew(mx_strlen(s1) + mx_strlen(s2) - 1);
    ans = mx_strcat(ans, s1);
    ans = mx_strcat(ans, s2);
    return ans;
}
