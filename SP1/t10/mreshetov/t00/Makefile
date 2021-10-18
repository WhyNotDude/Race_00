flags := -std=c11 -Wall -Wextra -Werror -Wpedantic
name := read_file

all: clean $(name)

$(name):
	clang $(flags) -Iinc -o $(name) src/*.c

clean:
	rm -rf $(name)

uninstall:
	rm -rf $(name)

reinstall:
	make uninstall
	make