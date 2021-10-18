
void mx_printchar(char c);

void mx_cube(int n)
{

    /*fail checking*/

    if (n < 2)
    {
        return;
    }

    /* upper line, first stadia */
    for (int i = 0; i <= n / 2; i++)
    {
        mx_printchar(' ');
    }

    mx_printchar('+');

    for (int i = 0; i < n * 2; i++)
    {
        mx_printchar('-');
    }

    mx_printchar('+');

    mx_printchar('\n');

    /*upper ribs, second stadia*/

    for (int i = n / 2; i > 0; i--)
    {
        for (int p = 0; p < i; p++)
        {
            mx_printchar(' ');
        }

        mx_printchar('/');

        for (int p = 0; p < n * 2; p++)
        {
            mx_printchar(' ');
        }

        mx_printchar('/');

        for (int p = 0; p < n / 2 - i; p++)
        {
            mx_printchar(' ');
        }

        mx_printchar('|');

        mx_printchar('\n');
    }

    /*front-up ribs, third stadia*/

    mx_printchar('+');

    for (int i = 0; i < n * 2; i++)
    {
        mx_printchar('-');
    }

    mx_printchar('+');

    for (int i = 0; i < n / 2; i++)
    {
        mx_printchar(' ');
    }

    mx_printchar('|');

    mx_printchar('\n');

    /*frontside ribs(upper half), fourth stadia*/

    for (int i = 0; i < n - ((n / 2) + 1); i++)
    {
        mx_printchar('|');

        for (int p = 0; p < n * 2; p++)
        {
            mx_printchar(' ');
        }

        mx_printchar('|');

        for (int p = 0; p < n / 2; p++)
        {
            mx_printchar(' ');
        }

        mx_printchar('|');

        mx_printchar('\n');
    }

    /*frontside ribs(down half), fifth stadia*/

    for (int p = 0; p < n - (n - ((n / 2) + 1)); p++)
    {
        mx_printchar('|');

        for (int i = 0; i < n * 2; i++)
        {
            mx_printchar(' ');
        }

        mx_printchar('|');

        if (p == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                mx_printchar(' ');
            }

            mx_printchar('+');
        }
        else
        {

            for (int i = 0; i < n / 2 - p; i++)
            {
                mx_printchar(' ');
            }

            mx_printchar('/');
        }
        mx_printchar('\n');
    }

    /*downside rib, sixth stadia*/

    mx_printchar('+');

    for (int i = 0; i < n * 2; i++)
    {
        mx_printchar('-');
    }

    mx_printchar('+');

    mx_printchar('\n');
}

int main()
{
    mx_cube(5);

    return 0;
}
