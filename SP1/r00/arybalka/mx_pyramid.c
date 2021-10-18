
void mx_printchar(char c);

void mx_pyramid(int n)
{

    /* apex, first stadia */

    for (int i = 0; i < n; i++)
    {
        mx_printchar(' ');
    }

    mx_printchar('/');

    mx_printchar('\\');

    mx_printchar('\n');

    /* middle-part of pyramid, second stadia */

    for (int p = 0; p < n / 2 - 1; p++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            mx_printchar(' ');
        }
    }
}
