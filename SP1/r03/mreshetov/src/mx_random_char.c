#include "header.h"

char mx_random_char(){
    int i = rand() % 95 + 32;
    return (char) i;
}
