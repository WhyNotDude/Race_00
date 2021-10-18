#include <stdbool.h>

bool mx_isspace(char c)
{
    if ((c >= '\t' && c <= '\r') || c == '\n')
        return true;
    else
        return false;
}
