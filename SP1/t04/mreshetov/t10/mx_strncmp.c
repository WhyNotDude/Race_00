
int mx_strncmp(const char *s1, const char *s2, int n){
    int answer = 0;
    int i = 0;
    
    while ((answer == 0 && s1[i] != 0 && s2[i] != 0) && (i < n)){
        answer = s1[i] - s2[i];
        i++;
    }
    return (answer);
}


