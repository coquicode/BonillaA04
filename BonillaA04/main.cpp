//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
//  main.cpp
//  BonillaA04
//
//  Created by Roem Bonilla on 10/10/21.
//
#include "bus.hpp"
#include "functions.hpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//"global" pointer size variable
const int SIZE = 50;
int main()
{
    ifstream busRecs;
    string buffer,busID,busType,busCapacity,busMileage,busStatus;
   
    int j = 0;
    ///creates bus object ptr and initializes array to null
    Bus *bussesPtr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        bussesPtr[i] = nullptr;
    }
    //open file
    busRecs.open("/Users/Roem/Desktop/COMSC200/a4dataF21.txt");
   
    if (!busRecs.is_open())
        {
            cout << "File Not Found" << endl;
                    return 1;
        }
    //else file opens
        cout << "Opening File" << endl;
    
    //While loop reads the file until eof
    while (getline(busRecs, buffer))
    {
       
    
    //cout << buffer;
       busID = buffer.substr(0,5);
        busType = buffer.substr(5,1);
        busCapacity = buffer.substr(6,3);
        busMileage = buffer.substr(9,7);
        busStatus = buffer.substr(16);
         
        
        
        //string conversions//
        char cType[busID.length()], cStat[busStatus.length()];
        //id conversion
        for (int i = 0; i < busID.length(); i++)
            {
        cType[i] = busType.c_str()[i];
          //status conversion
            }
        for (int i = 0; i < busStatus.length(); i++)
            {
        cStat[i] = busStatus.c_str()[i];
                
            }
        //Converts strings to ints
        //    ID            Capacity                           Mileage
        int inID = stoi(busID),inCap = stoi(busCapacity),  inMil = stoi(busMileage);
        
        bussesPtr[j] = new Bus(inID, cType, inCap, inMil, cStat);
       j++;
        
       
    }
   
    busRecs.close();
    
    int count = 0;//iterates through ptr array
    
    //prints menu
    displayMenu();
    
    string userIn; //variable for user input
    int convert = 0; //user input to in conversion
    getline(cin,userIn);//stores user input
    
    header();
    while (bussesPtr[count] != nullptr)
    {
        cout << bussesPtr[count]->getbusID();cout << setw(15); cout << bussesPtr[count]->getType(); cout << setw(15); cout << bussesPtr[count]->getCapacity(); cout << setw(15); cout << bussesPtr[count]->getMileage();cout << setw(15); cout << bussesPtr[count]->getStatus() << endl;
        count ++;
    }
  
    switch (convert)
    {
        case 1:
            <#statements#>
            break;
        case 2:
            statements
            break;
        case 3:
            setStatus(/*some variable*/);
        case 4:
            cout << "Thanks you, have a nice banana!" << endl;
            break;
           
        default:
            break;
    }
    
    return 0;
}
