#include "ReadWriteSave.h"
#include <iostream>
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

        getline(inFS, readLine);
        while (!inFS.eof()) {
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
        outFS.close();
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

void DeleteListings()
{
    fstream file_stream("listing_records.txt");


    if (!file_stream.is_open())
    {
        cout << "Error!!! Cannot open file!" << endl;
        cout << "ERROR AT LINE 102" << endl;
        file_stream.close();

    }
    else
    {
        vector<string> lineContainer;
        string recLine;
        int line_number;
        while(getline(file_stream, recLine))
        {
            lineContainer.push_back(recLine);
        }

        cout << "Enter which listing number you would like to delete: \n" << endl;

        cin >> line_number;

        if (line_number > lineContainer.size())
        {
            cout << "Line " << line_number << " does not exist in the file." << endl;
            (line_number == 1) ?
            (cout << "The save file has only " << lineContainer.size() << " line.\n" << endl)
            :
            (cout << "The save file has only " << lineContainer.size() << " lines.\n" << endl);

            file_stream.close();
        }
        else{
            ofstream outFS;

            outFS.open("listing_records.txt");

            if (!outFS.is_open() || outFS.fail())
            {
                cout << "Error!!! Cannot open file!" << endl;
                cout << "ERROR AT LINE 137" << endl;
                outFS.close();

            }
            else
            {
                for (int i = 0; i < lineContainer.size(); i++)
                {
                    if (i != line_number)
                    {
                        outFS << lineContainer.at(i) << endl;
                    }
                    else
                    {
                        outFS << "" << endl;
                    }
                }
                outFS.close();
            }
        }

        file_stream.close();

    }

}