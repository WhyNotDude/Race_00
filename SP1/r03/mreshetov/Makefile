all: uninstall matrix_rain

matrix_rain: inc/*.h src/*.c
	clang -std=c11 -lncurses -Wall -Wextra -Werror -Wpedantic src/*.c -o matrix_rain -I inc

clean:

uninstall: 
	rm -rf matrix_rain

reinstall: uninstall all
