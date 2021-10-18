#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift)
{
    int temp, i, j;
    if (shift < 0)
        for (i = 0; i > shift; i--)
        {
            temp = arr[0];
            for (j = 0; j < size - 1; j++)
                arr[j] = arr[j + 1];
            arr[j] = temp;
        }
    else
        for (i = 0; i < shift; i++)
        {
            temp = arr[size - 1];
            for (j = size - 1; j > 0; j--)
                arr[j] = arr[j - 1];
            arr[j] = temp;
        }
}

int main()
{
    int lol[5] = {1, 2, 3, 4, 5};

    mx_arr_rotate(lol, 5, 2);

    for (int i = 0; i < 5; i++)
    {
        printf("%d", lol[i]);
    }

    return 0;
}
