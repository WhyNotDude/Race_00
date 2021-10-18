
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        for (int j = argc - 1; j > i; j--) {
            if (mx_strcmp(argv[j - 1], argv[j]) > 0) {
                char *str = argv[j - 1];
                argv[j - 1] = argv[j];
                argv[j] = str;
            }
        }
    }
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}

