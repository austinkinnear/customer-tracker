#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <cstdlib> //used for the exit, same as Rectangle.cpp (Vesion 1)
#include <iostream>

using namespace std;

// Constants to define the maximum limit for each section
const int MAX_CUSTOMERS = 5;
const int MAX_LICENSE_LENGTH = 10;
const int MAX_NAME_LENGTH = 15;
const int MAX_PHONE_LENGTH = 11;

class DogInventory { //Class to hold all dog information
private:
    string dogLicense;
    string dogName;
    string ownerPhone;
    float priceQuoted;

public:
    DogInventory(); // Default Constructor which initializies memebers to default

    string getDogLicense() const; // Accessors to return individual attributes
    string getDogName() const;
    string getOwnerPhone() const;
    float getPriceQuoted() const;

    void setDogLicense(const string& license); //Sets dogs license
    void setDogName(const string& name); //Sets dogs name
    void setOwnerPhone(const string& phone); //Sets Phone number
    void setPriceQuoted(float price); //Sets price for dog wash
};

#endif
