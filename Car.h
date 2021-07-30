#pragma once
#include <string>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	short numDoors;
	bool hatchback;
public:
	Car(void); //constructor
	Car(string vin, string make, string model, short year, double price, short numDoors, bool hatchback, Engine motor);
	~Car(void); //destructor
	string toString();

	//accessors and mutators

	short getNumDoors(void);
	void setNumDoors(short numDoors);

	bool getHatchback(void);
	void setHatchback(bool isHatchback);

};

