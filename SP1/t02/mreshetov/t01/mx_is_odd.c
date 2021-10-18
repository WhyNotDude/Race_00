#include <stdbool.h>

bool mx_is_odd(int value){
    bool answer = false;
        if ((value % 2) == 0)
        {
            answer = true;
        }
    return answer;
}
