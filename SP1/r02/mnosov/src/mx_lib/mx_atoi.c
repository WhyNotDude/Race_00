#include "way_header.h"

int mx_atoi(const char *str) {
    int i = 0;
    bool negative = false;
    
    
    while (mx_isspace(str[i]) == 1) {
        i++;
    }


    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            negative = true;
        }
        i++;
    }

    int res = 0;
    while (mx_isdigit(str[i]) == 1) {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return negative ?  res * -1 : res;
}
