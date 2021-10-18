
int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count)
{

    int counti = 0;
    int current = size / 2 - 1;
    int min = 0, max = size;
    int answer;

    for (int i = 0; i < size / 2; i++)
    {
        counti++;
        answer = mx_strcmp(arr[current], s);
        if (!answer)
        {
            *count = counti;
            return current;
        }
        if (answer > 0)
            max = current;
        if (answer < 0)
            min = current;
        current = min + ((max - min) / 2);
    }
    *count = 0;
    return -1;
}
