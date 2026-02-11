#include "menus.hpp"

int main() {
    Menu menu("Name", "Description", "Message");

    menu.AddItem(
        MenuItem("ABC")
    );
    menu.AddItem(
        MenuItem("AB2314C2", "Not quite the alphabet")
    );
    menu.AddItem(
        MenuItem("ABC2", "Try a rework I guess")
    );
    menu.AddItem(
        MenuItem("AB234234234234C2", "Probably not the one")
    );
    menu.AddItem(
        MenuItem("ABC222", "That's a lot of reworks")
    );

    std::string res = menu.ShowList();
    std::string res2 = menu.ShowAlias();
    std::string res3 = menu.ShowAliasList();

    std::cout << res << " " << res2 << " " << res3 << std::endl;

    return 0;
}