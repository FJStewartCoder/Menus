CC = gcc
CPPC = g++


menus.o: src/menus.c
	${CC} $^ -Iinclude -c -o $@

menus_cpp.o: src/menus.cpp
	${CPPC} $^ -Iinclude -c -o $@

clean:
	rm *.o

all: menus.o menus_cpp.o
	${CC} src/main.c menus.o -Iinclude -g
	${CPPC} src/main.cpp menus_cpp.o -Iinclude -g -o b.out
