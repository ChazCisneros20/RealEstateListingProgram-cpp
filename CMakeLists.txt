cmake_minimum_required(VERSION 3.29)
project(FINALPROJECT)

set(CMAKE_CXX_STANDARD 23)

add_executable(FINALPROJECT main.cpp
        MainMenu.cpp
        CreateListing.cpp
        PrintListings.cpp
        PropertyListings.h
        CreateListing.h
        PrintListings.h
        MainMenu.h
        ButtonOptions.cpp
        ButtonOptions.h
        SearchListings.cpp
        SearchListings.h
)
