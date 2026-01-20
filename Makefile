menus.o:
	gcc src/menus.c -Iinclude -c

clean:
	rm *.o

all: menus.o
	gcc src/main.c menus.o -Iinclude -g