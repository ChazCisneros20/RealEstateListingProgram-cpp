#include "ButtonOptions.h"

void ButtonOptions(char menuChar, vector<Listing> &propertyLists)
{
    std::cin.ignore();

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

void RecordListings(vector<Listing> &propertyLists)
{
    std::ofstream outFS;

    outFS.open("listing_records.txt");

    if (!outFS.is_open())
    {
        for (int i = 0; i < propertyLists.size(); i++)
        {
            Listing tempListings = propertyLists.at(i);
            std::cout << tempListings.streetNum << ' ';
            std::cout << tempListings.streetName << ' ';
            std::cout << tempListings.streetCity << ' ';
            std::cout << tempListings.state << ' ';
            std::cout << tempListings.zipCode << ' ';
            std::cout << tempListings.bedRooms << ' ';
            std::cout << tempListings.bathRooms << ' ';
            std::cout << tempListings.propertyType << ' ';
            std::cout << tempListings.squareFootage << "\n" << std::endl;

        }
    }

    std::cout << "";
}
