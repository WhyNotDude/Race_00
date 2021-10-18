int mx_gcd(int a, int b) {
    if (b == 0)
        return a;
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }
    if (a % b == 0) 
        return b;
    else return mx_gcd(b, a % b);
}
