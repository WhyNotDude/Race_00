int mx_strlen(const char *s){
    char i = ' ';
    int counter = 0;
    while (i != '\0'){
        i = s[counter];
        counter++;
    }
    return counter - 1;
}
