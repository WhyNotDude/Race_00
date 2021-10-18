#include <stdbool.h>

void mx_printint(int n);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    
    int sum = 0;
    for (int i = 1; i < argc; i++) {
            if((argv[i][0] == '+' || argv[i][0] == '-' )|| (mx_isdigit(argv[i][0]) == true)) {
                for (int j = 1; argv[i][j] != '\0'; j++) {
                    if (mx_isdigit(argv[i][j])) {
                        if (argv[i][j + 1] == '\0')
                            sum += mx_atoi(argv[i]);
                    }
                }
            }
            if((mx_isdigit(argv[i][0]) == true) && (argv[i][1] == '\0'))
                sum += mx_atoi(argv[i]);
    }
    if (argc > 1) {
        mx_printint(sum);
        mx_printchar('\n');
    }
    return 0;
}

