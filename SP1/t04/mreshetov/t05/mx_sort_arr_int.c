
void mx_sort_arr_int(int *arr, int size){
    int var;
    for (int i = 0; i < size; i++){
        for (int p = 0; p < size - 1; p++){
            if (arr[p] > arr[p+1]){
                var = arr[p];
                arr[p] = arr[p+1];
                arr[p+1] = var;
            }
        }
    }
}


