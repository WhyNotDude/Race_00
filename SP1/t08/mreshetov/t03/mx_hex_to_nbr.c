#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex){
    int len = 0;
    unsigned long int ans= 0;

    int digit = 0;

    int multiplier;

    while (hex[len] != 0) len++;

    if (len > 16) return 0;

    for (int i = 0; i < len; i++){
        if (mx_isdigit(hex[i]) == false && ( hex[i] < 'A' && hex[i] > 'F' && hex[i] < 'a' && hex[i] > 'f'))
        return 0;

        if(mx_isdigit(hex[i]) == true){
            digit = hex[i] - '0';
        } else if (mx_islower(hex[i]) == true){
            digit = hex[i] - 'a' + 10;
        } else if (mx_isupper(hex[i]) == true)
        {
            digit = hex[i] - 'A' + 10;
        }
        
        multiplier = 1;
        for (int p = len - 1 - i; p > 0; p--){
            multiplier *= 16;
        }

        ans = ans + (digit * multiplier);

    }
    return ans;
}
