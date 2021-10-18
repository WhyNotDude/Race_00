
int mx_sum_digits(int num){
    int hun = 0;
    for (int i = 0; i < 10; i++){
        hun = num % 10 + hun;
        num = num / 10;
    }
    if (hun < 0)
    hun *= -1;

    return hun;
}