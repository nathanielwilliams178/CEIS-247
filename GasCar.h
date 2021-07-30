#pragma once
#include <string>
#include "Car.h"
class GasCar : public Car
{
private:
	float tankSize;
	short mpg;
public:
	GasCar();
	GasCar(string vin, string make, string model, short year, double price, short numDoors, bool hatchback,
		float tankSize, short mpg, Engine motor);
	~GasCar();

	//accessors and mutators
	float getTankSize(void);
	void setTankSize(float tankSize);

	short getMPG(void);
	void setMPG(short mpg);

	string toString();

};

