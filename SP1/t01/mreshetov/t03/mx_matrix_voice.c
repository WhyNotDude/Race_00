#include <unistd.h>

void mx_matrix_voice(void){
    write (1, "\007", 3);
}

int main(){
    mx_matrix_voice();
    return 0;
}
