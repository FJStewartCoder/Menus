menus.o: src/menus.c
	gcc $^ -Iinclude -c

clean:
	rm *.o

all: menus.o
	gcc src/main.c menus.o -Iinclude -g