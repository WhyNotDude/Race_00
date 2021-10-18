
int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);


int mx_count_substr(const char *str, const char *sub){
    int len = mx_strlen(sub);
    int count = 0;
    char *word = (char *) str;

    while (1){
        word = mx_strstr(word, sub);
        if(word != 0){
            count++;
            word += len;
        } else {
            return count;
        }
    }

    return count;
}
