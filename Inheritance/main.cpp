/*
Wei Chen
CIS 1202
11/26/2020
*/


#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include <string>
#include <iostream>




using namespace std;



int main()
{
	
	string manufacturer;
	int year, door;
	double capacity;

	Vehicle vehicle;
	Car car;
	Truck truck;




	cout << "Vehicle Program" << endl;

	cout << "\n";
	cout << "Vehicle:" << endl;

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);         
	vehicle.setManufacturer(manufacturer);
	cout << "Enter the year built: ";
	cin >> year;       
	vehicle.setYear(year);

	vehicle.displayInfo();
	cout << endl;


	
	cout << "\n";
	cout << "Car:";

	
	cout << "\nEnter the manufacturer:";
	cin.ignore();
	getline(cin, manufacturer);      
	car.setManufacturer(manufacturer); 

	cout << "Enter the year built:";

	cin >> year; 
	car.setYear(year);     

	
	cout << "Enter the number of doors:";
	cin >> door;   

	car.setDoors(door);    
	car.displayInfo();



	cout << "\n";
	cout << "\nTruck:";
	
	cout << "\nEnter the manufacturer:";
	cin.ignore();
	getline(cin, manufacturer);        
	truck.setManufacturer(manufacturer);      


	cout << "Enter the year built:";
	cin >> year; 

	truck.setYear(year);      

	
	cout << "Enter the towing capacity:";
	cin >> capacity;    

	truck.setCapacity(capacity);        
	truck.displayInfo();




	cout << endl << endl;
	system("pause");
	return 0;
}
