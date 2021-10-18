#include <unistd.h>

void mx_printchar(char c)
{
    char str[1];
    str[0] = c;
    write(1, str, 1);
}

void mx_printint(int n)
{
    int is = 0;
    int num[10] = {0};

    if (n == 0)
    {
        mx_printchar('0');
        return;
    }

    if (n < 0)
    {
        mx_printchar('-');
        n = n * (-1);
    }

    for (int i = 9; i >= 0; i--)
    {
        num[i] = (n % 10) + '0';
        n = n / 10;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (num[i] != '0' && is == 0)
            is = 1;

        if (is == 1)
        {
            mx_printchar(num[i]);
        }
    }
}
