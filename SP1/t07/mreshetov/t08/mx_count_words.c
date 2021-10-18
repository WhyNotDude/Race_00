
int mx_count_words(const char *str, char delimiter){
    int wcount = 0, count = 0, i = 0;
    
    while(str[i] != 0){
        if (wcount != 0){
            if(str[i] == delimiter){
                count++;
                wcount = 0;
            } else {
                wcount++;
            }
        } else if (str[i] != delimiter)
        wcount++;
        i++;
    }

    if(wcount != 0){
        count++;
    }

    return count;
}
