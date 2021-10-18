
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s){
int length = mx_strlen(s);

for (int i = length-1, p = 0; p < ((length/2) + length % 2); i--, p++){
    mx_swap_char(&s[p], &s[i]);
}
}
