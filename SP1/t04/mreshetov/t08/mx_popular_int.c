
int mx_popular_int(const int *arr, int size){
    int array[size];
    for (int i = 0; i < size; i++){
        array[i] = arr[i];
    }

    for (int i = 1; i <= size; i++){
        for (int p = 0; p < size - 1; p++){
            if (array[p] > array[p+1]){
                int var = array[p];
                array[p] = array[p+1];
                array[p+1] = var;
            }
        }
    }

    for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

    int ans = array[0];
    int ansc = 1;
    int var = 0;
    int varc = 0;

    for (int i = 1; i < size; i++){
        if (array[i] != ans){
            var = array[i];
            varc++;
        } else {
            ansc++;
        }

        if(varc > ansc){
            ansc = varc;
            ans = var;
            varc = 0;
            var = 0;
        }
    }

    return ans;
}

