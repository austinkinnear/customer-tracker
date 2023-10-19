#include "inventory.h"

DogInventory::DogInventory(): dogLicense(""), dogName(""), ownerPhone(""), priceQuoted(0.0f) {} // Default Constructor which initializies memebers to default

string DogInventory::getDogLicense() const { return dogLicense; } 
string DogInventory::getDogName() const { return dogName; }
string DogInventory::getOwnerPhone() const { return ownerPhone; }
float DogInventory::getPriceQuoted() const { return priceQuoted; }

void DogInventory::setDogLicense(const string& license) { //Sets dog license
    if (license.length() > MAX_LICENSE_LENGTH) {
        cerr << "Error: License is too long!" << endl;
        exit(EXIT_FAILURE);
    }
    dogLicense = license;
}

void DogInventory::setDogName(const string& name) { //Sets dog name
    if (name.length() > MAX_NAME_LENGTH) {
        cerr << "Error: Name is too long!" << endl;
        exit(EXIT_FAILURE);
    }
    dogName = name;
}

void DogInventory::setOwnerPhone(const string& phone) { //Sets owner's phone number
    if (phone.length() > MAX_PHONE_LENGTH) {
        cerr << "Error: Phone number is too long!" << endl;
        exit(EXIT_FAILURE);
    }
    ownerPhone = phone;
}

void DogInventory::setPriceQuoted(float price) { //Sets price quoted for dog wash
    if (price < 0.0f) {
        cerr << "Error: Price can't be negative!" << endl;
        exit(EXIT_FAILURE);
    }
    priceQuoted = price;
}
