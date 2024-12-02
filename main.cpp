#include "MainMenu.h"
#include "ButtonOptions.h"
#include <iostream>
using namespace std;
int main() {
    vector<Listing> propertyLists;
    char buttonChar;
    bool haveMoreOperation = MainMenu(buttonChar);
    while (haveMoreOperation){
        ButtonOptions(buttonChar, propertyLists);
        haveMoreOperation = MainMenu(buttonChar);
    }

    cout << "Exiting application... We can't wait to see you again!" << endl << endl;

    return 0;
}
