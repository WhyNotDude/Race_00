#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long  nbr){

    int i = 0;

    int remainder = 0;

    unsigned long temp = nbr;

    if (nbr < 0)
    return NULL;

    if (nbr == 0){
        char *res = mx_strnew(1);
        res[0] = '0';
        return res;
    }

    while (temp != 0){i++; temp = temp / 16;} 

    char *res = mx_strnew(i);

    for (i= i - 1; i >= 0; i--){
        remainder = nbr % 16;

        if(remainder < 10) {res[i] = '0' + remainder;}
        else {res[i] = remainder - 10 + 'A';}

        nbr = nbr / 16;
    }

    return res;
}
