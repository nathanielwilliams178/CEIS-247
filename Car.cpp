#include "Car.h"

Car::Car() : Vehicle()
{
	short numDoors = 0;
	bool hatchback = false;
}


Car::~Car()
{}

Car::Car(string vin, string make, string model, short year, double price, short numDoors, bool hatchback,
	Engine motor) : Vehicle(vin, make, model, year, price, motor)
{
	setNumDoors(numDoors);
	setHatchback(hatchback);
}


string Car::toString()
{
	return Vehicle::toString() + ", NumDoors: " + to_string(numDoors) + ", Hatchback: " + to_string(hatchback);
}


short Car::getNumDoors(void)
{
	return numDoors;
}


void Car::setNumDoors(short numDoors)
{
	if (numDoors > 0 && numDoors < 5)
		this->numDoors = numDoors;
	else
		this->numDoors = 0;
}


bool Car::getHatchback(void)
{
	return hatchback;
}


void Car::setHatchback(bool isHatchback)
{
	this->hatchback = isHatchback;
}

