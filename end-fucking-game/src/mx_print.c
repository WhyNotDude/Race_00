#include <unistd.h>

int mx_strlen(const char *s) {
    const char *iter = s;
    while (*iter != 0)
        ++iter;
    return iter - s;
}

void mx_printerr(const char *err) {
    write(STDERR_FILENO, err, mx_strlen(err));
}
