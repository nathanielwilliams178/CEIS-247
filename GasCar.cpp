#include "GasCar.h"

GasCar::GasCar()
{
	float tankSize = 0.0f;
	short mpg = 0;
}

GasCar::GasCar(string vin, string make, string model, short year, double price, short numDoors, bool hatchback,
	float tankSize, short mpg, Engine motor) :Car(vin, make, model, year, price, numDoors, hatchback, motor)
{
	setTankSize(tankSize);
	setMPG(mpg);
}

GasCar::~GasCar()
{
}

float GasCar::getTankSize(void)
{
	return tankSize;
}

void GasCar::setTankSize(float tankSize)
{
	if (tankSize > 0.0f)
		this->tankSize = tankSize;
	else
		this->tankSize = 0.0f;
}

short GasCar::getMPG(void)
{
	return mpg;
}

void GasCar::setMPG(short mpg)
{
	if (mpg > 0)
		this->mpg = mpg;
	else
		this->mpg = 0;
}

string GasCar::toString()
{
	return Car::toString() + "Tank Size: " + to_string(tankSize) + "MPG: " + to_string(mpg);
}
