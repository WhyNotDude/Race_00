
void mx_printchar(char c);

void mx_str_separate(const char *str, char delim){
    int i = 0;
    while(str[i] != 0){

        if (str[i] != delim)
        mx_printchar(str[i]);
        else
        mx_printchar('\n');
    i++;
    }
    mx_printchar('\n');

}
