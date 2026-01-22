#include "menus.h"

#include <stdio.h>

int main() {
    menu_t menu1 = create_menu("Hello", "This is a menu");
    char *options[] = {"a", "Ab", "abc", "AbCD", "abcde", "AbCDEf", "abcdefg", "abcdefgh", "abcdefghi", "abcdefghij", "abcdefghijk", "abcdefghijkl", "abcdefghijklm", "abcdefghijklmn", "abcdefghijklmno", "abcdefghijklmnop", "abcdefghijklmnopq", "abcdefghijklmnopqr", "abcdefghijklmnopqrs", "abcdefghijklmnopqrst", "abcdefghijklmnopqrstu", "abcdefghijklmnopqrstuv", "abcdefghijklmnopqrstuvw", "abcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxy", "abcdefghijklmnopqrstuvwxyz"};

    for (int i = 0; i < 26; i++) {
        add_menu_item(&menu1, options[i], i == 3);
    }
    
    menu_return_t res = show_menu(&menu1, TEXT);
    menu_return_t res2 = show_menu(&menu1, STANDARD);

    printf("%s %s\n", res.str, res2.str);

    return 0;
}