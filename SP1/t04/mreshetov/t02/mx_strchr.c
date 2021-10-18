
char *mx_strchr(const char *s, int c){
    int i = 0;

    while (s[i] != 0){

        if (s[i] == c){
          const char *ans = &s[i];
        return (char *)ans;
        }
        i++;
    }
    return 0;
}


