#include "h.h"

int mx_count_lines(const char *str) {
    bool state = true;
    unsigned wordcount = 0;
    int i = 0;
    
    if (str == NULL)
        return -1;
    else {
        while (str[i]) {
            if (str[i] == '\n')
                state = true;
            else if (state == true) {
                state = false;
                ++wordcount;
            }
            ++i;
        }
        return wordcount;
    }
}
