#include "menus.hpp"

int main() {
    using namespace std;

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

    auto res = menu.ShowList();
    auto res2 = menu.ShowAlias();
    auto res3 = menu.ShowAliasList();

    cout << res->name << ", idx: " << res->idx << endl;
    cout << res2->name << ", idx: " << res2->idx << endl;
    cout << res3->name << ", idx: " << res3->idx << endl;

    return 0;
}