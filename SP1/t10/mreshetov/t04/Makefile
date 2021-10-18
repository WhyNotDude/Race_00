PROGRAM_NAME = mx_wc
INC_LOC = inc
SRC_LOC = src
OBJ_LOC = obj
COMPLILLER = clang
COMPLILLER_FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: copy object move clean $(PROGRAM_NAME)

copy:
	mkdir $(OBJ_LOC)
	cp $(INC_LOC)/*.h $(OBJ_LOC)
	cp $(SRC_LOC)/*.c $(OBJ_LOC)

object:
	$(COMPLILLER) $(COMPLILLER_FLAGS) -c $(OBJ_LOC)/*.c

move:
	cp *.o $(OBJ_LOC)

clean:
	rm *.o
	rm $(OBJ_LOC)/*.h
	rm $(OBJ_LOC)/*.c

$(PROGRAM_NAME):
	$(COMPLILLER) $(COMPLILLER_FLAGS) -o $(PROGRAM_NAME) $(OBJ_LOC)/*.o

uninstall:
	rm -rf $(PROGRAM_NAME)
	rm -f *.o
	rm -rf $(OBJ_LOC)

reinstall:
	make uninstall
	make
