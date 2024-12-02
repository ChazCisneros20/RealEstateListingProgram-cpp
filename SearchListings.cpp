#include "SearchListings.h"
#include <fstream>
#include <iostream>

void SearchCityStateZip();
void SearchThreshold(vector<Listing> &propertyLists);

void SearchListings(vector<Listing> &propertyLists) {
    // Create a variable that user inputs as a "findSubstr" and if the loop encounters it, then print it;
    char findSubstr;

    cout << "Search Menu: Press: " << endl << endl;

    cout << "1 to search in a city." << endl
              << "2 to search in a state." << endl
              << "3 to search in a zipcode." << endl
              << "4 to search all properties with less than a threshold" << endl << endl;

    cin >> findSubstr;

    if (findSubstr > 0 && findSubstr < 4)
    {
        SearchCityStateZip();
    }
    else
    {
        SearchThreshold(propertyLists);
    }

}
//"listing_records.txt"
void SearchCityStateZip()
{
    string keyWord;
    string lineCheck;

    cout << "Find listings in a selected city, state, or zipcode: " << endl << endl;

    cout << "Type in a city name, a state, or a zipcode" << endl << endl;

    cin >> keyWord;

    ifstream inFS;

    inFS.open("listing_records.txt");

    if (!inFS.is_open())
    {
        cout << "Could not locate save file.. " << endl;
    }

    getline(inFS, lineCheck);

    while (!inFS.eof())
    {
        if (lineCheck.find(keyWord) != string::npos) {
            cout << lineCheck << "\n" << endl;
        }
    }

}

void SearchThreshold(vector<Listing> &propertyLists)
{
    Listing tempLine;
    string priceThreshold;

    cout << "Find listings under a certain asking price threshold" << "\n" << endl;

    cout << "Enter a price: " << "\n" << endl;

    cin >> priceThreshold;

    for (int i = 0; i < propertyLists.size(); i++)
    {
        tempLine = propertyLists.at(i);

        if (tempLine.askingPrice < priceThreshold)
        {
            cout << tempLine.streetNum << " ";
            cout << tempLine.streetName << " ";
            cout << tempLine.streetCity << " ";
            cout << tempLine.state << " ";
            cout << tempLine.zipCode << " ";
            cout << tempLine.bedRooms << " ";
            cout << tempLine.bathRooms << " ";
            cout << tempLine.propertyType << " ";
            cout << tempLine.squareFootage << endl;

        }
    }
}





