#ifndef MENUS_HPP
#define MENUS_HPP

#include <iostream>
#include <vector>


typedef enum {
    STANDARD,
    TEXT
} menu_type_t;



class MenuItem {
    public:
        std::string name;
        bool isDefault;
    
        MenuItem(std::string name = "", bool isDefault = false);
};

class Menu {
    private:
        std::vector<MenuItem> items;
        std::string name;
        std::string description;

    public:
        Menu(std::string name = "", std::string description = "");

        void AddItem(std::string name = "", bool isDefault = false);

        // show functions
        void ShowStandard();
        void ShowAlt();
};


#endif // MENUS_HPP