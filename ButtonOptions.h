#ifndef FINALPROJECT_BUTTONOPTIONS_H
#define FINALPROJECT_BUTTONOPTIONS_H

#include "PropertyListings.h"
#include <vector>
using namespace std;

#include "CreateListing.h"
#include "PrintListings.h"
#include "SearchListings.h"
#include "ReadWriteSave.h"
#include <iostream>

void RecordListings(vector<Listing> &propertyLists);
void ButtonOptions(char menuChar, vector<Listing> &propertyLists);

#endif //FINALPROJECT_BUTTONOPTIONS_H
