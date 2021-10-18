#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num){

if (num < 1)
return false;

int our_num = num, sum = 0;

int digitcount = 0;
while (num != 0){
    num = num/10;

    digitcount++;
}

num = our_num;

for (int i = 0; i < digitcount; i++){
   sum = mx_pow(num % 10, digitcount) + sum;
   num = num/10;
}


if (sum == our_num)
return true;
else 
return false;
}
