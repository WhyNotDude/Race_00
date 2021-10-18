#include "only_smiths.h"

int mx_strcmp(const char *s1, const char *s2){
    int answer = 0;
    int i = 0;
    
    while (answer == 0 && s1[i] != 0 && s1[i] != 0){
        answer = s1[i] - s2[i];
        i++;
    }
    return (answer);
}
