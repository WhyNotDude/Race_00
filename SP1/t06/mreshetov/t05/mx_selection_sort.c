
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size)
{
    int minPosition = 0;
    char *tmp;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        minPosition = i;
        for (int j = i + 1; j < size; j++)
            if (mx_strlen(arr[minPosition]) == mx_strlen(arr[j]))
            {
                count++;
                if (mx_strcmp(arr[minPosition], arr[j]) < 0)
                {
                    break;
                }
                minPosition = j;
            }
            else if (mx_strlen(arr[minPosition]) > mx_strlen(arr[j]))
            {
                minPosition = j;
            }
        tmp = arr[minPosition];
        arr[minPosition] = arr[i];
        arr[i] = tmp;
    }
    return count;
}
