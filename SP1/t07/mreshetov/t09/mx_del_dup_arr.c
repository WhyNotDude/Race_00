#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size)
{
    if (dst_size == 0 || src == 0 || src_size < 0)
        return NULL;

    if (src_size == 1)
    {
        int ans[1];
        ans[0] = src[0];
        return mx_copy_int_arr(ans, 1);
    }

    int temp[src_size];
    int do_copy;
    int pointer = 1;

    for (int i = 0; i < src_size; i++)
    {
        temp[i] = 0;
    }

    temp[0] = src[0];

    for (int i = 1; i < src_size; i++)
    {
        do_copy = 1;
        for (int j = 0; j < i; j++)
        {
            if (temp[j] == src[i])
            {
                do_copy = 0;
                break;
            }
        }
        if (do_copy == 1)
        {
            temp[pointer] = src[i];
            pointer++;
        }
        else
        {
            do_copy = 1;
        }
    }

    int ans[pointer];

    for (int i = 0; i < pointer; i++)
    {
        ans[i] = temp[i];
    }

    *dst_size = pointer;

    printf("%d\n", pointer);

    return mx_copy_int_arr(ans, pointer);
}
