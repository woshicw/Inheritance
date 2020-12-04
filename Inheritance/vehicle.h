#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iomanip>
#include <string>
#include <iostream>
using namespace std;


class Vehicle
{
private:

    string manufacturer = "";
    int year = 0;

public:

    void displayInfo()
    {
        cout << "\n";
        cout << "Vehicle Information:" << endl;
        cout << left << "Manufacturer: ";
        cout << setw(20) << right << getManufacturer();
        cout << "\n";
        cout << "Year Built: ";
        cout << setw(20) << right << getYear();
        
    }

 
    void setYear(int);
    void setManufacturer(string);


    int getYear() const
    {
        return year;
    }

  
    string getManufacturer() 
    {
        return manufacturer;
    }
};       

#endif

