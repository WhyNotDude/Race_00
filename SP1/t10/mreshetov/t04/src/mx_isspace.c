#include "h.h"

bool mx_isspace(char c) {
    if (c == 32
        || c == 10
        || c == 9
        || c == 11
        || c == 12
        || c == 13) {
        return 1;
    }
    else {
        return 0;
    }
}
