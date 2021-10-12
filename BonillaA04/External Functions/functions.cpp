//
//  functions.cpp
//  BonillaA04
//
//  Created by Roem Bonilla on 10/10/21.
//

#include "functions.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
void displayMenu()
{
cout << "Enter transaction code (D = Display, L = List a Bus, C = Change, X = Exit" << endl;
}

//Prints the header
void header()
{
    cout << "======================================================================" << endl;
    
    cout << "Bus ID"; cout << setw(15);cout << "Bus Type"; cout << setw(15); cout << "Bus Capacity"; cout << setw(15); cout << "Mileage"; cout << setw(15); cout << "Status" << endl;
    
    cout << "======================================================================" << endl;
}
//Searches for a bus
