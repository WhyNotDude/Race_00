#include <time.h>

double mx_timer(void (*f)()){
    clock_t begin = clock();
    f();
    clock_t fin = clock();

    return (begin == (clock_t)(-1) || fin == (clock_t)(-1)) ? -1 : (double)(fin - begin) / 1000000;
}

