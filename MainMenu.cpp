#include "MainMenu.h"
#include <iostream>
#include <cctype>
using namespace std;

bool MainMenu(char& menuChar)
{
    bool validFlag = false;

    while (!validFlag)
    {
        PrintMenu();
        cin >> menuChar;
        menuChar = tolower(menuChar);
        validFlag = PressCheck(menuChar);
    }

    if (menuChar == 'e')
    {
        return false;
    }
    else
    {
        return true;
    }

}

bool PressCheck(char menuChar)
{

    cout << "Checking if valid input..." << endl;

    if (menuChar == 'c' || menuChar == 'p' ||
        menuChar == 's' || menuChar == 'r' ||
        menuChar == 'e')
    {
        return true;

    }
    else
    {
        cout << "Invalid input." << endl << endl;
        return false;
    }
}

void PrintMenu()
{

    cout << "Main menu. Press: " << endl << endl;

    cout << "c/C to create a property listing" << endl
         << "p/P to print all property listings" << endl
         << "s/S to search all property listings" << endl
         << "r/R to record all property listings" << endl
         << "e/E to exit" << endl;
}


