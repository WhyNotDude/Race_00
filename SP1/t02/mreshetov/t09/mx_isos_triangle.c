
void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c){
    for (unsigned int i = 1; i <= length; i++){
        for (unsigned int p = 0; p < i; p++){
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}
