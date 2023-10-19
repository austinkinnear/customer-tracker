/******************************************************************************

Austin Kinnear
Chapter 13 Programming Assingment
10/16/23 - 10/19/23

*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> //used for the exit, same as Rectangle.cpp (Vesion 1)
#include "inventory.h"

using namespace std;

int main() {
    DogInventory customers[MAX_CUSTOMERS]; //Initialized array to store customer information
    int currentCustomerCount = 0;
    
    while(true) {
        cout << "You Dirty Dog Menu:" << endl;
        cout <<"1. Enter a new job" << endl;
        cout << "2. List all current jobs" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter menu choice: ";
        int choice;
        cin >> choice;
        cin.ignore();
        
        switch (choice) {
            case 1: {
                if (currentCustomerCount >= MAX_CUSTOMERS) { //checks against the constant maxs set at the beggining
                    cout << "Sorry, we can't add more dogs right now." << endl;
                    break;
                }

                DogInventory newDog; //created to store new dog details

                cout << "Dog License Number: ";
                string license;
                getline(cin, license);
                newDog.setDogLicense(license);

                cout << "Dog Name: ";
                string name;
                getline(cin, name);
                newDog.setDogName(name);

                cout << "Customer Phone: ";
                string phone;
                getline(cin, phone);
                newDog.setOwnerPhone(phone);

                cout << "Price: $";
                float price;
                cin >> price;
                cin.ignore();
                newDog.setPriceQuoted(price);

                cout << "Thank you, we will take good care of " << name << " today!" << endl;

                customers[currentCustomerCount++] = newDog; //Stores the most recent dog details into customers array

                break;
            }
            case 2: {
                cout << "Current Jobs:" << endl;
                float totalQuotes = 0.0f; //Initializes varaible to keep track of quoted price
                for (int i = 0; i < currentCustomerCount; i++) {
                    cout << customers[i].getDogLicense() << endl;
                    cout << customers[i].getDogName() << endl;
                    cout << customers[i].getOwnerPhone() << endl;
                    cout << fixed << setprecision(2) << "$" << customers[i].getPriceQuoted() << endl;
                    cout << "***" << endl;
                    totalQuotes += customers[i].getPriceQuoted();
                }
                cout << "You currently have " << currentCustomerCount << " jobs. Total: $" << totalQuotes << "." << endl;
                break;
            }
            case 3: //Exit thank you message from assignment instructions
                cout << "Thanks for using the menu system and have a nice day." << endl;
                return 0;
            default:
                cout << "That's not a valid choice. Please try again!" << endl; //In case user input a # > 3 or # < 1 
                break;
        }
    } 

    return 0;
}
