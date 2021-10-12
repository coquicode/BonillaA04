//
//  bus.cpp
//  BonillaA04
//
//  Created by Roem Bonilla on 10/10/21.
//
#include "functions.hpp"
#include "bus.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Default Constructor
Bus::Bus():
busID(0), type('\0'), capacity(0), mileage(0), status('\0')
{
//Awesome constructor
}
Bus::Bus(int ID, char* bType, int cap, int mile, char* stat)
{
    busID = ID;
    type = *bType;
    capacity = cap;
    mileage = mile;
    status = *stat;
}
//Setters
void Bus::setStatus(char setIt)
{
    status = setIt;
    
}
//Getters
int Bus::getbusID() const
{
    
    return busID;
}
char Bus::getType() const
{
    
    return type;
}
int Bus::getCapacity() const
{
   
    return capacity;
}
int Bus::getMileage() const
{
   
    return mileage;
}
char Bus::getStatus() const
{
    
    return status;
}
string Bus::search(int seId, char stat[], Bus * bts[])const
{
    
    int i = 0;
    while (bts[i] != nullptr)
            {
                if (seId == bts[i]->getbusID())
                {
                    bts[i]->setStatus(stat[0]);
                    return  "Succes";
                }
            }
            return "Bus ID not found";
}
string Bus::displayBus(int id, Bus *bts[])
{
    int i = 0;
    while (bts[i] != nullptr)
            {
                if (id == bts[i]->getbusID())
                {
                    displayMenu();
                    header();
                    cout << bts[i]->getbusID();cout << setw(15); cout << bts[i]->getType(); cout << setw(15); cout << bts[i]->getCapacity(); cout << setw(15); cout << bts[i]->getMileage();cout << setw(15); cout << bts[i]->getStatus() << endl;
                }
                i++;
            }
            return "Bus not found";
}

int Bus::disOne(Bus *poaat[])
{   string waiting = "";
    int i =0;
    while (poaat[i] != nullptr)
    {
        cout << poaat[i]->getbusID();cout << setw(15); cout << poaat[i]->getType(); cout << setw(15); cout << poaat[i]->getCapacity(); cout << setw(15); cout << poaat[i]->getMileage();cout << setw(15); cout << poaat[i]->getStatus() << endl;
        i ++;
        cin >> waiting;
    }
    return -1;
}
Bus::~Bus()
{
    
}
