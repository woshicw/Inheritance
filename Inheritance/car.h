#pragma once
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "vehicle.h"          


class Car :public Vehicle
{
private:
    
    int doors;

public:
    
    Car() : Vehicle() {
        doors = 0;
    }
 
    void displayInfo()
    {
        Vehicle::displayInfo();
        cout << endl;
        cout << "Doors: ";
        cout << setw(25) << right << getDoors();
    }

    void setDoors(int);

    int getDoors() const
    {
        return doors;
    }
};      

#endif

