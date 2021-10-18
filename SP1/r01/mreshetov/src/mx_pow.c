
double mx_pow(double n, unsigned int pow){
    double ans = n;

    if (pow != 0)
    for (unsigned int i = 0; i < pow - 1; i ++){
        ans = ans * n;
    } else
    ans = 1;

    return ans;
}
