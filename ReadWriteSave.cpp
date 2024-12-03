#include "ReadWriteSave.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

void ReadListings(vector<Listing> &propertylists)
{
    ifstream inFS;
    inFS.open("listing_records.txt");
    string readLine;
    string readAttribute;
    Listing currListing;

    if (!inFS.is_open())
    {
        inFS.close();
        cout << "Error. Unable to locate save file. \n" << endl;
    }
    else
    {
        cout << "Loading save file" << endl;

        while (!inFS.eof()) {
            getline(inFS, readLine);
            stringstream ss(readLine);

            ss >> currListing.streetNum;
            ss >> currListing.streetName;
            ss >> currListing.streetCity;
            ss >> currListing.state;
            ss >> currListing.zipCode;
            ss >> currListing.bedRooms;
            ss >> currListing.bathRooms;
            ss >> currListing.propertyType;
            ss >> currListing.squareFootage;
            ss >> currListing.askingPrice;

            propertylists.push_back(currListing);
            getline(inFS, readLine);
        }

        inFS.close();
        cout << "Finished loading.\n" << endl;


    }
}


void RecordListings(vector<Listing> &propertyLists)
{
    ofstream outFS;

    outFS.open("listing_records.txt");

    cout << "Saving to file \"listing_records.txt\" ..." << "\n" << endl;

    if (!outFS.is_open()){
        cout << "Error!!! Cannot open file!" << endl;
    }
    else {
        for (const Listing& tempListings : propertyLists)
        {
            outFS << tempListings.streetNum << " ";
            outFS << tempListings.streetName << " ";
            outFS << tempListings.streetCity << " ";
            outFS << tempListings.state << " ";
            outFS << tempListings.zipCode << " ";
            outFS << tempListings.bedRooms << " ";
            outFS << tempListings.bathRooms << " ";
            outFS << tempListings.propertyType << " ";
            outFS << tempListings.squareFootage << " ";
            outFS << tempListings.askingPrice << " " << endl;

        }

        cout << "Saving complete!" << "\n" << endl;

        outFS.close();

    }

    cout << "Returning to main menu." << "\n" << endl;

}