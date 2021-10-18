#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n)
{

    if (n <= 0 || mx_is_prime(n) == false)
        return false;

    for (int i = 1; i <= 31; i++)
    {
        if ((mx_pow(2, i) - 1) == n)
            return true;
    }
    return false;
}
