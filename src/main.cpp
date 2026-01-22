#include "menus.hpp"

int main() {
    Menu menu("Name", "Description");
    menu.AddItem("ABC");
    menu.AddItem("AB2314C2");
    menu.AddItem("ABC2");
    menu.AddItem("AB234234234234C2");
    menu.AddItem("ABC222");

    menu.ShowStandard();
    menu.ShowAlt();

    return 0;
}