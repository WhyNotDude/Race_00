int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size)
{
    char *max;
    int j;
    int shifts = 0;
    for (int i = 0; i < size; i++)
    {
        max = arr[i];
        for (j = i - 1; j >= 0 && mx_strlen(arr[j]) > mx_strlen(max); j--)
        {
            shifts++;
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = max;
    }
    return shifts;
}
