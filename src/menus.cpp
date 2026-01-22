#include "menus.hpp"


// GLOBAL CONSTANTS -------------------------------------------------------------------

 
const std::string EMPTY_STRING_ERROR = "Please enter an input";
const std::string NOT_INTEGER_ERROR = "Please enter a number";
const std::string OUT_OF_RANGE = "Please enter a number within the valid range";


// UTILITIES --------------------------------------------------------------------------


std::string ReadStdin() {
    std::string newStr;

    // currently read character
    char c;
    
    // read while character is not '\n' ( user pressed enter )
    while ( (c = getchar()) != '\n' ) {
        // add the read character to the string
        newStr += c;
    }

    // return the string
    return newStr;
}


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

std::string Menu::ShowStandard() {
    using namespace std;

    cout << "-- " << name << " --" << endl;

    const int numMenuItems = items.size();

    // print each option with format "n - name"
    for ( int i = 0; i < numMenuItems; i++ ) {
        cout << i + 1 << " - " << items.at(i).name << endl;
    }

    // the chosen value by the user
    int intChoice;

    while ( true ) {
        string choice = ReadStdin();

        if ( choice.empty() ) {
            cout << EMPTY_STRING_ERROR << endl;
            continue;
        }

        // scan the buffer into int
        const bool failed = sscanf(choice.c_str(), "%d", &intChoice) == 0;

        if ( failed ) {
            cout << NOT_INTEGER_ERROR << endl;
            continue;
        }
        
        const bool inRange = intChoice >= 1 && intChoice <= numMenuItems;

        if ( !inRange ) {
            cout << OUT_OF_RANGE << endl;
            continue;
        }

        break;
    }

    // return the string that represents the item selected
    return items.at(intChoice - 1).name;
}

std::string Menu::ShowAlt() {
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

    return "NOT IMPLEMENTED YET";
}