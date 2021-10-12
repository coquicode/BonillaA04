//
//  bus.hpp
//  BonillaA04
//
//  Created by Roem Bonilla on 10/10/21.
//

#ifndef bus_hpp
#define bus_hpp
#include <iostream>
#include <string>
using namespace std;

//begin class here:
class Bus
{
    private:
    int busID;
    char type;
    int capacity;
    int mileage;
    char status;
    
public:
    //Default Constructor
    Bus();
    //The best Constructor
   
    Bus(int, char*, int, int, char*);
    //Destructor
    ~Bus();
    
    //setter
    void setStatus(char);
    
    //getters
    int getbusID() const;
    char getType() const;
    int getCapacity() const;
    int getMileage() const;
    char getStatus() const;
    int search(int, Bus*) const;
};
    
#endif /* bus_hpp */
