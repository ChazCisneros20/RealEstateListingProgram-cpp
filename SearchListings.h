#ifndef FINALPROJECT_SEARCHLISTINGS_H
#define FINALPROJECT_SEARCHLISTINGS_H
#include "PropertyListings.h"
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
void SearchListings(vector<Listing> &propertyLists);
void SearchCityStateZip(vector<Listing>& propertyLists);
void SearchThreshold(vector<Listing> &propertyLists);
vector<string> ListingToString(vector<Listing>& propertyLists);
#endif //FINALPROJECT_SEARCHLISTINGS_H
