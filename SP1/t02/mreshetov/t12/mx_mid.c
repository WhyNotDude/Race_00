
int mx_mid(int a, int b, int c){
    int d;
    for (int i = 0; i < 3; i++){
        if (a < b){
        d = b;
        b = a;
        a = d;
        }
        if (b < c){
            d = b;
            b = c;
            c = d;
        }
    }
    return b;
}
