#include "CreateListing.h"
#include <iostream>
#include <cctype>

//USED FOR CREATING A LISTING,
void CreateListing(vector<Listing> &propertyLists)
{
    int i = 0;
    int typeCheck;
    //char repeatCreation;

    Listing currList;

    std::string streetNum, streetName, streetCity, zipCode,
    bedRooms, bathRooms, propertyType, squareFootage, askingPrice;

    //STREET NUMBER
    std::cout << "Enter a street number: " << std::endl << std::endl
    << "    " << "Example: " << std::endl;
    std::cout << "        " << "8987" << std::endl
    << "        " << "2230" << std::endl << std::endl;

    getline(std::cin, streetNum);

    unsigned int n = streetNum.size();
    while (i < n)
    {
        if (!isdigit(streetNum.at(i)))
        {
            std::cout << "⚠ Invalid input. Enter only digits." << std::endl;
            //quitFlag = true;
            CreateListing(propertyLists);
        }
        i++;
    }
    currList.streetNum = streetNum;
    //STREET NAME
    std::cout << "Enter a street name: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "Cherry Tree Lane" << std::endl
              << "        " << "West Haggard Drive" << std::endl << std::endl;
    getline(std::cin, streetName);
    currList.streetName = streetName;
    //CITY
    std::cout << "Enter a city: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "Sacramento" << std::endl
              << "        " << "Palo Alto" << std::endl << std::endl;
    getline(std::cin, streetCity);
    currList.streetCity = streetCity;
    //ZIPCODE
    std::cout << "Enter a zipcode: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "95367" << std::endl
              << "        " << "95218" << std::endl << std::endl;
    getline(std::cin, zipCode);
    currList.zipCode = zipCode;
    //BEDROOMS
    std::cout << "Enter the number of bedrooms: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "1" << std::endl
              << "        " << "4" << std::endl << std::endl;
    getline(std::cin, bedRooms);
    currList.bedRooms = bedRooms;
    //BATHROOMS
    std::cout << "Enter the number of bathrooms: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "2" << std::endl
              << "        " << "1" << std::endl << std::endl;
    getline(std::cin, bathRooms);
    currList.bathRooms = bathRooms;
    //PROPERTY TYPE
    std::cout << "What is the property type? " << std::endl << std::endl;
    std::cout << "Enter:  " << std::endl;
    std::cout << "    " << "\"1\" for a Single Family House" << std::endl;
    std::cout << "    " << "\"2\" for a Townhouse" << std::endl;
    std::cout << "    " << "\"3\" for a Condo" << std::endl;

    std::cin >> typeCheck;

    if (typeCheck == 1)
    {
        propertyType = "Single Family House";
    }
    else if (typeCheck == 2)
    {
        propertyType = "Townhouse";
    }
    else if(typeCheck == 3)
    {
        propertyType = "Condo";
    }
    currList.propertyType = propertyType;
    //SQUARE FOOTAGE;
    std::cout << "Enter the square footage: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "2796" << std::endl
              << "        " << "450" << std::endl << std::endl;

    cin.ignore();

    getline(std::cin, squareFootage);
    currList.squareFootage = squareFootage;
    //ASKING PRICE;
    //FIXME:: MAKE IT SO THE USER CAN ALSO ADD A COMMA LATER ON.
    std::cout << "Enter the asking price: " << std::endl << std::endl
              << "    " << "Example: " << std::endl;
    std::cout << "        " << "15000" << std::endl
              << "        " << "4" << std::endl << std::endl;

    getline(std::cin, askingPrice);
    currList.askingPrice = askingPrice;

    propertyLists.push_back(currList);

    std::cout << "You've created an extra listing of: " << "\n" << endl;

    currList.print();

    /*
    std::cout << "Would you like to make another property listing? " << std::endl << std::endl;
    std::cout << "Enter:  " << std::endl;
    std::cout << "    " << "\"y/Y\" to create another property listing" << std::endl;
    std::cout << "    " << "\"e/E\" to return to main menu" << std::endl;

    std::cin >> repeatCreation;
     */

}
