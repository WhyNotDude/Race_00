
int mx_max(int a, int b, int c){
    for (int i = 0; i < 3; i++){
        if (b > a)
            a = b;
        if (c > b)
            b = c;
    }
    return a;

}
