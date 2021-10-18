#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
bool mx_isdigit(int c);

int main (int argc, char *argv[]){

    if((argc != 3 ||
     mx_isdigit(argv[1][0]) == false ||
     mx_isdigit(argv[2][0]) == false) || 
     (mx_isdigit(argv[2][1]) == true || 
     mx_isdigit(argv[1][1]) == true))
    return 0;

    int a = mx_atoi(argv[1]);
    int b = mx_atoi(argv[2]);

    if (a > b){
        int c = a;
        a = b;
        b = c;
    }

    for (int p = a; p <= b; p++){
        for (int i = a; i <= b; i++){
            mx_printint(p*i);
            if(i!=b)
            mx_printchar('\t');
        }
        mx_printchar('\n');
    }

    return 0;
}



