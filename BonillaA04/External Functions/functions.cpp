//
//  functions.cpp
//  BonillaA04
//
//  Created by Roem Bonilla on 10/10/21.
//

#include "functions.hpp"
#include <iomanip>
void displayMenu()
{
cout << "Enter transaction code (D = Display, L = List a Bus, C = Change, X = Exit" << endl;
    ;}

void header()
{
    cout << "======================================================================" << endl;
    
    cout << "Bus ID"; cout << setw(15);cout << "Bus Type"; cout << setw(15); cout << "Bus Capacity"; cout << setw(15); cout << "Mileage"; cout << setw(15); cout << "Status" << endl;
    
    cout << "======================================================================" << endl;
}
