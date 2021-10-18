#include "h.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        char buf[1];
        int words = 0;
        int lines = 0;
        int bites = 0;
        int status = read(0, buf, 1);
        char last = '\0';
        int is_space_was = 0;

        if (mx_isspace(buf[0])) {
            is_space_was++;
            if (!mx_isspace(last)) {
                words++;
            }
        }

        if (buf[0] == '\n')
            lines++;

        bites++;

        last = buf[0];

        while (status != 0) {
            status = read(0, buf, 1);

            if (mx_isspace(buf[0])) {
                is_space_was++;
                if (!mx_isspace(last))
                    words++;
            }
            last = buf[0];

            if (buf[0] == '\n')
                lines++;

            bites++;
        }

        if (lines != 0)
            lines--;
        bites--;

        if (is_space_was == 0)
            words = 1;

        mx_printchar('\t');
        mx_printint(lines);
        mx_printchar('\t');
        mx_printint(words);
        mx_printchar('\t');
        mx_printint(bites);
        mx_printchar('\n');

        return 0;
    }

    int t_lines = 0;
    int t_spaces = 0;
    int t_chars = 0;

    for (int i = 1; i < argc; i++) {
        if (mx_strcmp(argv[i], ".") == 0) {
            mx_printstr("mx_wc: ");
            mx_printstr(argv[i]);
            mx_printstr(": read: Is a directory\n");

            continue;
        }

        int fl = open(argv[i], O_RDONLY);
        int sz = 0;
        int size = 0;

        if (fl == -1) {
            mx_printstr("mx_wc: ");
            mx_printstr(argv[i]);
            mx_printstr(": open: No such file or directory\n");

            close(fl);

            continue;
        }

        size = mx_file_len(argv[i]);

        if (size == 0)
            return 0;

        char *newstr = mx_strnew(size);

        sz = read(fl, newstr, size);

        close(fl);
        
        int lines = mx_count_lines(newstr);
        int spaces = mx_count_words(newstr);
        int chars = mx_count_characters(newstr);

        t_lines += lines;
        t_spaces += spaces;
        t_chars += chars;

        mx_printchar('\t');
        mx_printint(lines);
        mx_printchar('\t');
        mx_printint(spaces);
        mx_printchar('\t');
        mx_printint(chars);
        mx_printchar('\t');
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }

    if (argc >= 3 && t_lines != 0 && t_spaces != 0 && t_chars != 0) {
        mx_printchar('\t');
        mx_printint(t_lines);
        mx_printchar('\t');
        mx_printint(t_spaces);
        mx_printchar('\t');
        mx_printint(t_chars);
        mx_printchar('\t');
        mx_printstr("total");
        mx_printchar('\n');
    }

    return 0;
}
