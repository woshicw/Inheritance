#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include "vehicle.h"


class Truck : public Vehicle
{
private:
   
    int capacity;

public:
   
    Truck():Vehicle()
    {
        capacity = 0;
   }
    
    void displayInfo()
    {
        cout << "\n";
        Vehicle::displayInfo();
        cout << endl;
        cout << "Towing capacity: ";
        cout << setw(15) << right << getCapacity();
    }
    


    void setCapacity(int);

    
    int getCapacity() const
    {   return capacity;  }
};       

#endif 