#include "h.h"

int mx_count_characters(const char* s) {
    int i = 0;
    
    if (!s)
        return 0;
        
    while (s[i])
        i++;

    return i;
}
