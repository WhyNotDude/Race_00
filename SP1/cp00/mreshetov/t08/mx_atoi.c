#include <stdbool.h>

bool mx_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

bool mx_isspace(char c)
{
    if ((c > 8 && c < 14) || c == 32)
        return true;
    else
        return false;
}

int mx_atoi(const char *str)
{
    int i = 0;
    int ans = 0;
    int multipliyer = 1;
    int is_minus = 0;

    if (str[i] == '-')
    {
        i++;
        is_minus = 1;
    }
    else if (str[i] == '+')
        i++;

    while (mx_isdigit(str[i]) == true && mx_isspace(str[i]) == false)
    {

        if (i > 0)
            multipliyer = 10;

        ans = ans * multipliyer + (str[i] - '0');

        i++;
    }

    if (is_minus == 0 && ans < 0)
    {
        return -1;
    }

    if (is_minus == 1)
        ans = ans * -1;

    return ans;
}
