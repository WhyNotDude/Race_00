clang -c -std=c11 -Wall -Wextra -Werror -Wpedantic *.c
ar -rv minilibmx.a *.o
rm *.o