all : clean copy prep_lib

CXX = clang
CXX_FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic


SRC_DIR := ./src
OBJ_DIR := ./obj
INC_DIR := ./inc
MX_LIB_DIR := ./src/mx_lib


SRC_FILES := $(SRC_DIR)/*.c
INC_FILES := $(INC_DIR)/*.h
MX_LIB_FILES := $(MX_LIB_DIR)/*.c

clean :
	rm -rf obj

copy :
	mkdir obj
	cp $(SRC_FILES) $(OBJ_DIR);
	cp $(INC_FILES) $(OBJ_DIR);
	cp $(MX_LIB_FILES) $(OBJ_DIR);

prep_lib:
	$(CXX) $(CXX_FLAGS) -o matrix_rain $(OBJ_DIR)/*.c

uninstall :
	rm -rf obj

reinstall :
	make uninstall
	make
