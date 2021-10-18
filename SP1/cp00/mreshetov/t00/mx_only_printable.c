#include <unistd.h>

void mx_printchar(char c)
{
    char str[1];
    str[0] = c;
    write(1, str, 1);
}

void mx_only_printable(void)
{
    for (int i = 126; i > 32; i--)
    {
        mx_printchar(i);
    }
    write(1, "\n", 1);
}
