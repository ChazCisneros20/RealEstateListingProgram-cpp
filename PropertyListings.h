#ifndef FINALPROJECT_PROPERTYLISTINGS_H
#define FINALPROJECT_PROPERTYLISTINGS_H
#include <iostream>
using namespace std;

class Listing
{
    public:
        std::string streetNum;
        std::string streetName;
        std::string streetCity;
        std::string state;
        std::string zipCode;
        std::string bedRooms;
        std::string bathRooms;
        std::string propertyType;
        std::string squareFootage;
        std::string askingPrice;
        //10 attributes

        void print(){
            cout << streetNum << " ";
            cout << streetName << " ";
            cout << streetCity << " ";
            cout << state << " ";
            cout << zipCode << " ";
            cout << bedRooms << " ";
            cout << bathRooms << " ";
            cout << propertyType << " ";
            cout << squareFootage << " ";
            cout << askingPrice << " " << endl;
        }

};



//std::vector<std::string> listAttributes = {
//    "streetNum", "streetName", "streetCity", "state", "zipCode", "bedRooms", "bathRooms", "propertyType",
//    "squareFootage", "askingPrice"
//};

#endif //FINALPROJECT_PROPERTYLISTINGS_H
