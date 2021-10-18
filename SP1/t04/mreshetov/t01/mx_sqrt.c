
int mx_sqrt(int x){
    int a = x/2;

    if (a * a == x)
    return a;
    else if (x <= 0)
    return 0;

    for (int i = 0; i < 31; i++){
        a = (a + x / a) / 2;

        if(a * a == x)
        return a;
        
    }
    return 0;
}

