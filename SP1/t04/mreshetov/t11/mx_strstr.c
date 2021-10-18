
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2){
    int len = mx_strlen(s2);

    while(*s1){
        if(!mx_strncmp(s1, s2, len))
        return (char *)s1;
        s1++;
    }
    return 0;
}
