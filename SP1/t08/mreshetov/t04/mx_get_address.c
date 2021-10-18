#include "get_address.h"

char *mx_get_address(void *p){
    unsigned long int address = (unsigned long int) p;
    char *hexaddress = mx_nbr_to_hex(address);
    int len = mx_strlen(hexaddress);

    char * ans = mx_strnew(len+2);
    ans[0] = '0';
    ans[1] = 'x';

    return mx_strcpy(ans+2, hexaddress);
}
