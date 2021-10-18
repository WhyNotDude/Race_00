
void mx_printchar(char c);

void mx_printint(int n){
    int is = 0;
    int num[10] = {0};
    
    for (int i = 9; i >= 0; i--){
        num[i] = (n % 10) + '0';
        n = n / 10;
    }

    for (int i = 0; i <= 9; i++){
        if (num[i] != '0' && is == 0)
        is = 1;

        if (is == 1){
            mx_printchar(num[i]);
        }
    }

}

