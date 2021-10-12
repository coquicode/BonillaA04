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
int Bus::search(int seId, Bus * bts)const
{
    
    int i = 0;
    while (bts[i]->getbusID() != nullptr)
            {
                
                if (seId == bts[i].getbusID())
                {

                    return  i;
                }

            }
            return -1;
    
  
}
Bus::~Bus()
{
    
}
