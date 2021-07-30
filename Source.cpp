
/*
Nate Williams
03/21/2020
CIS247C Course Project
*/

#include <iostream>
#include <string>
#include <iomanip> //setw, setprecision
#include <fstream> //read and write to files
#include "Car.h" // Car Parent/Child header 
#include "Vehicle.h" // Vehicle Parent Header
#include "ECar.h" //Electric Car Child Header
#include "GasCar.h" // Gas Child Header
#include "SUV.h" //SUV Child Header

using namespace std;

//prototypes
void saveToFile(Vehicle* ptrVehicle);
string determineChildType(Vehicle* ptrVehicle);

//Entry point for the application
int main()
{
	//Vehicle Objects
	const int NUM_CARS = 4;
	Vehicle* vehicles[NUM_CARS];
	vehicles[0] = new Car ("Q2345678901234567", "Mitshibishi", "Eclipse", 2007, 6000.0, 2, false, Engine(4, 1234));
	vehicles[1] = new SUV ("T2345678901234567", "Kia", "Sportage", 2020, 20000.0, 8, 50.4f, Engine(4, 1234));
	vehicles [2] = new GasCar("R2345678901234567", "Chevrolet", "SS", 2016, 30000.0, 4, false, 18, 19, Engine(4, 1234));
	vehicles [3] = new ECar("E2345678901234567", "Tesla", "Model S", 2020, 70000.0, 2, false, 75, 240, 136, Engine(4, 1234));
	

	
	//Check the size
	cout << "Size of the Car Object: " << sizeof(vehicles[0]) << endl;
	cout << "Size of pointer to Car Object: " << sizeof(&vehicles[0]) << endl;
	cout << endl; //blank line

	//delete the file if it exists
	remove("data.txt");

	//call the method to write your Car to the file
	for (int i = 0; i < NUM_CARS; i++)
		saveToFile(vehicles[i]);

	for (int i = 0; i < NUM_CARS; i++)
		delete vehicles[i];

	//pause
	cout << endl;
	system("pause");

	return 0;

}

void saveToFile(Vehicle* ptrVehicle)
{
	//open the pipe to the file
	ofstream outToFile("data.txt", ios::app); // app means to append something to the file
	//if the file is open, write the data to the file
	string childType = determineChildType(ptrVehicle);
	if (outToFile.is_open())
	{
		outToFile << childType << ","
			<< ptrVehicle->getVin() << "," << ptrVehicle->getMake() << "," <<
			ptrVehicle->getModel() << "," << ptrVehicle->getYear() << "," << ptrVehicle->getPrice() << "," <<
			ptrVehicle->getMotor().getCylinders() << "," <<
			ptrVehicle->getMotor().getHorsepower() << endl;

		if (childType == "SUV")
		{
			SUV* suv1 = dynamic_cast<SUV*>(ptrVehicle);
			outToFile << "," << suv1->getnumSeats() << ","
				<< suv1->getcargoSize();
		}

		if (childType == "Car")
		{
			Car* c1 = dynamic_cast<Car*>(ptrVehicle);
			outToFile << "," << c1->getNumDoors() << "," << c1->getHatchback();
		}

		if (childType == "Electric Car")
		{
			ECar* e1 = dynamic_cast<ECar*>(ptrVehicle);
			outToFile << "," << e1->getBatterySize() << "," << e1->getRange() << "," << e1->getmpgE();
		}

		if (childType == "Gas Car")
		{
			GasCar* g1 = dynamic_cast<GasCar*>(ptrVehicle);
			outToFile << "," << g1->getTankSize() << "," << g1->getMPG();
		}

		outToFile << endl;
		//close the pipe
		outToFile.close();
		//tell user that the data was written
		cout << ptrVehicle->getMake() << " " << ptrVehicle->getModel()
			<< " was written to the file!" << endl;
	}
}

string determineChildType(Vehicle* ptrVehicle)
{
	ECar* e1 = dynamic_cast<ECar*>(ptrVehicle);
	if (e1 != nullptr)
		return "Electric Car";

	GasCar* g1 = dynamic_cast<GasCar*>(ptrVehicle);
	if (g1 != nullptr)
		return "Gas Car";

	Car* c1 = dynamic_cast<Car*>(ptrVehicle);
	if (c1 != nullptr)
		return "Car";

	SUV* suv1 = dynamic_cast<SUV*>(ptrVehicle);
	if (suv1 != nullptr)
		return "SUV";

	return "Error";
}
