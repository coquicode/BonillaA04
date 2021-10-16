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
    header();
    while (bussesPtr[count] != nullptr)
    {
        cout << bussesPtr[count]->getbusID();cout << setw(15); cout << bussesPtr[count]->getType(); cout << setw(15); cout << bussesPtr[count]->getCapacity(); cout << setw(18); cout << bussesPtr[count]->getMileage();cout << setw(12); cout << bussesPtr[count]->getStatus() << endl;
        count ++;
    }
    
    cout << endl;
        string userIn; //variable for user input
    
    string searchID;
    string newStat;
    string option;
    int find = 0;
    int choice;
    int intID =0;;
    char stats[2];
    
    getline(cin,userIn);//stores user input
    
   while (choice != 4)
       {
   if (userIn.compare(0,1, "C") == 0)
   {
       choice = 3;
       option = userIn.substr(0,1);
       searchID = userIn.substr(2,5);
       newStat = userIn.substr(7);
       intID = stoi(searchID);
       
       for (int i = 0; i < newStat.length(); i++)
           {
               stats[i] = userIn.c_str()[i];
           }
   }
else if (userIn.compare(0,1, "L") == 0)
{
    choice = 2;
       option = userIn.substr(0,1);
       searchID = userIn.substr(2,5);
       intID = stoi(searchID);
}
else if (userIn.compare(0,1, "D") == 0)
{
    choice = 1;
    
}
else if (userIn.compare(0,1,"X")== 0)
{
    choice = 4;
       
       int intID = stoi(searchID);
}
    
        Bus tempo;
    switch (choice)
    {
            //Displays one bus a time
        case 1:
            cout << "Press enter to see the next bus on the list. " << endl;
            displayMenu();
            header();
            tempo.disOne(bussesPtr);
            cout << "----End of list----" << endl;
            break;
            //Displays a single bus
        case 2:
           find = tempo.displayBus(intID, bussesPtr);
            
             
            if (find == -1)
            {
                cout << "\n Bus was not found" << endl;
            }
            
            else if (find > -1)
            {
                displayMenu();
                header();
                
                cout << "\n Bus Found:" << endl << endl;
                cout << bussesPtr[find]->getbusID();cout << setw(15); cout << bussesPtr[find]->getType(); cout << setw(15); cout << bussesPtr[find]->getCapacity(); cout << setw(18); cout << bussesPtr[find]->getMileage();cout << setw(12); cout << bussesPtr[find]->getStatus() << endl;
            }
            cout << "----End of list----" << endl;
            break;
            
         //Changes bus status
        case 3:
            int found = 0;
           found = tempo.search(intID, stats,  bussesPtr);
            if (found == 1)
                cout << "Success. Status updated." << endl;
            else
            {
                cout << "Bus could not be found." << endl;
            }
            break;
       
        }
           displayMenu();
           header();
           count = 0;
           while (bussesPtr[count] != nullptr)
              {
                  cout << bussesPtr[count]->getbusID();cout << setw(15); cout << bussesPtr[count]->getType(); cout << setw(15); cout << bussesPtr[count]->getCapacity(); cout << setw(18); cout << bussesPtr[count]->getMileage();cout << setw(12); cout << bussesPtr[count]->getStatus() << endl;
                 
                  count ++;
              }
          cout << "----End of list----" << endl;
 //          cin.ignore();
                      getline(cin,userIn);//stores user input
       }
    cout << "Thanks you, have a nice banana!" << endl;
    return 0;
}
