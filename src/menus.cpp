#include "menus.hpp"


// MENU ITEMS -------------------------------------------------------------------------


MenuItem::MenuItem(std::string name, bool isDefault) {
    this->name = name;
    this->isDefault = false;
}


// MENUS ------------------------------------------------------------------------------


Menu::Menu(std::string name, std::string description) {
    this->name = name;
    this->description = description;
}

void Menu::AddItem(std::string name, bool isDefault) {
    MenuItem newItem(name, isDefault);
    items.push_back(newItem);
}

void Menu::ShowStandard() {
    std::cout << name << std::endl;
}

void Menu::ShowAlt() {
    // reduces unnecessary std::
    using namespace std;

    string message = description + ": ";

    if ( description.empty() ) {
        message = "Select an option: ";
    }

    // begin printing the message
    cout << message;

    const int numItems = items.size();

    if ( numItems < 1 ) {
        cout << endl;
        return;
    }

    for ( int i = 0; i < numItems - 1; i++ ) {
        cout << items.at(i).name << ", ";
    }

    cout << items.back().name << ": " << endl;
}