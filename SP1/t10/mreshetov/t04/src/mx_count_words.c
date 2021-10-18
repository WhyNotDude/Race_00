#include "h.h"

int mx_count_words(const char *str) {
    int count = 0;
    bool last_was_space = true;
    int i = 0;
    
    if (str == NULL)
        return -1;
    
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f') {
            if (!last_was_space) {
                count++;
                last_was_space = true;
            }
        }
        else {
            if (str[i] != ' ' && str[i] != '\t' && str[i] != '\r' && str[i] != '\n' && str[i] != '\v' && str[i] != '\f')
                last_was_space = false;
        }

        i++;
    }

    return count;
}
