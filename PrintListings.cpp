#include "PropertyListings.h"
#include <iostream>
#include <vector>
using namespace std;

//FIXME::PRINT LISTINGS

void PrintListings(vector<Listing> &propertyLists)
{
    Listing tempListings;
    cout << "Printing " << propertyLists.size() << " listings: " << endl << endl;

    for (int i = 0; i < propertyLists.size(); i++)
    {
        cout << i + 1 << "). ";
        propertyLists.at(i).print();

    }
    cout << endl;
}
