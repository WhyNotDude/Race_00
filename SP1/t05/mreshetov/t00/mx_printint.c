#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    char arr[10];
    int iter = 0;

    if (n == 0) {
        mx_printchar('0');
        return;
    }

    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }

    while (n != 0) {
        arr[iter++] = n % 10 + '0';
        n /= 10;
    }
    
    while (iter > 0) {
        mx_printchar(*(arr + iter - 1));
        iter--;
    }
}
