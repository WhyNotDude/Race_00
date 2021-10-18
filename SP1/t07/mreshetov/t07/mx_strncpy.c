
char *mx_strncpy(char *dst, const char *src, int len){
    int i;

    for (i = 0; i < len; i++){
        if(src[i] != 0)

        dst[i] = src[i];

        else

        dst[i] = 0;
    }
    return dst;
}
