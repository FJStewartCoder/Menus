#include "menus.hpp"

int main() {
    Menu menu("Name", "Description");
    menu.AddItem("ABC");
    menu.AddItem("ABC2");

    menu.ShowStandard();
    menu.ShowAlt();

    return 0;
}