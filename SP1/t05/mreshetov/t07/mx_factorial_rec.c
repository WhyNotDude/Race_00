int mx_factorial_iter(int n) {
    if (n <= 0)
        return 1;
    if (n > 12)
        return 0;
    return n * mx_factorial_iter(n - 1);
}

