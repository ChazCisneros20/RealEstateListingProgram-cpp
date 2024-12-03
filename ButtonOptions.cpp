#include "ButtonOptions.h"
using namespace std;
void ButtonOptions(char menuChar, vector<Listing> &propertyLists)
{
    cin.ignore();

    switch (menuChar)
    {
        case 'c':
            CreateListing(propertyLists);
            break;
        case 'p':
            PrintListings(propertyLists);
            break;
        case 's':
            SearchListings(propertyLists);
            break;
        case 'r':
            RecordListings(propertyLists);
            break;
        default :
            break;
    }
}


