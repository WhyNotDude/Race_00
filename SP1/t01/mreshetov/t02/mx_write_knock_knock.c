#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void){
    char *frst_str = ("Follow the white rabbit.\n");
    char *scnd_str = ("Knock, knock, Neo.\n");

    write (1, frst_str, strlen(frst_str));
    write (1, scnd_str, strlen(scnd_str));
}

int main (){
    mx_write_knock_knock();

    return 0;
}
