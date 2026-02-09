#include "menus.h"

#include <stdio.h>
#include "input.h"

int main() {
    char buf[5];
    printf("Input: ");
    stdin_to_buf( buf, 5, ORDER_FIRST );
    printf("You entered: %s\n", buf);

    printf("Input: ");
    stdin_to_buf( buf, 5, ORDER_LAST );
    printf("You entered: %s\n", buf);

    printf("Input: ");
    char *new_buf = stdin_to_new_buf();
    printf("You entered: %s\n", new_buf);

    free(new_buf);

    menu_t menu1 = create_menu("Hello", "This is a menu");
    char *options[] = {"a", "Ab", "abc", "AbCD", "abcde", "AbCDEf", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk", "abcdefghijkl", "abcdefghijklm", "abcdefghijklmn", "abcdefghijklmno", "abcdefghijklmnop", "abcdefghijklmnopq", "abcdefghijklmnopqr", "abcdefghijklmnopqrs", "abcdefghijklmnopqrst", "abcdefghijklmnopqrstu", "abcdefghijklmnopqrstuv", "abcdefghijklmnopqrstuvw", "abcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxyz"};

    if ( true ) {
        add_menu_item(&menu1, "TEST", false);
    }  

    for (int i = 0; i < 26; i++) {
        add_menu_item(&menu1, options[i], i == 3);
    }
    
    menu_return_t res = show_menu(&menu1, TEXT);
    menu_return_t res2 = show_menu(&menu1, STANDARD);

    printf("%s %s\n", res.str, res2.str);

    return 0;
}