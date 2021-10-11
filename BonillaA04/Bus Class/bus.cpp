//
//  bus.cpp
//  BonillaA04
//
//  Created by Roem Bonilla on 10/10/21.
//

#include "bus.hpp"
#include <iostream>
#include <cstdlib>
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
void setStatus(char);

//Getters
int Bus::getbusID() const
{
    cout << "from the class " << busID << endl;
    return busID;
}
char Bus::getType() const
{
    cout << "from the class " << type << endl;
    return type;
}
int Bus::getCapacity() const
{
    cout << "from the class " << capacity << endl;
    return capacity;
}
int Bus::getMileage() const
{
    cout << "from the class " << mileage << endl;
    return mileage;
}
char Bus::getStatus() const
{
    cout << "from the class " << status << endl;
    return status;
}
Bus::~Bus()
{
    
}
