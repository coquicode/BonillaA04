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
    //while (!busRecs.eof())
    {
    getline(busRecs, buffer);
    cout << buffer;
       busID = buffer.substr(0,5);
        busType = buffer.substr(5,1);
        busCapacity = buffer.substr(6,3);
        busMileage = buffer.substr(9,7);
        busStatus = buffer.substr(16);
//        cout << "bus id is = " << busID << endl;
//        cout << "bus type is = " << busType << endl;
//        cout << "bus Cap is = " << busCapacity << endl;
//        cout << "bus Miles is = " << busMileage << endl;
//        cout << "bus Stat is = " << busStatus << endl;
        
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
        Bus(inID, cType, inCap, inMil, cStat);
    }
        
        
    
    return 0;
}
