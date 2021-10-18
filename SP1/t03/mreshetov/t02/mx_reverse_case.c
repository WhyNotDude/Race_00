#include <stdbool.h>

bool mx_islower(char c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);


void mx_reverse_case(char *s){
    int i = 0;
    char var;

    while (s[i] != 0){
        
        
        if (mx_islower(s[i]) == true){
        var = mx_toupper(s[i]);
        }
        
        if (mx_isupper(s[i]) == true){
        var = mx_tolower(s[i]);
        }

        s[i] = var;
        i++;
    }
}



