#include <unistd.h>

extern void mx_printchar(char c);

void mx_print_alphabet(void){
    int var = 0;
    for (int i = 1; i < 27; i++){
        //dwn
        if((i % 2) == 1){
            var = i + 64;
        } else{
            var = i + 96;
        }
        mx_printchar(var);
    }
        write (1, "\n", 1);
}
