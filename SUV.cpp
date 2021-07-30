#include "SUV.h"

SUV::SUV()
{
	short numSeats = 0;
	float cargoSize = 0.0f;
}

SUV::SUV(string vin, string make, string model, short year, double price, short numSeats, float cargoSize, Engine motor
) : Vehicle(vin, make, model, year, price, motor)
{
	setnumSeats(numSeats);
	setcargoSize(cargoSize);
}

SUV::~SUV()
{
}

short SUV::getnumSeats(void)
{
	return numSeats;
}

void SUV::setnumSeats(short numSeats)
{
	if (numSeats > 0 && numSeats < 16)
		this->numSeats = numSeats;
	else
		this->numSeats = 0;
}

float SUV::getcargoSize(void)
{
	return cargoSize;
}

void SUV::setcargoSize(float cargoSize)
{
	if (cargoSize > 0.0f && cargoSize < 200.0f)
		this->cargoSize = cargoSize;
	else
		this->cargoSize = 0.0f;
}

string SUV::toString()
{
	return Vehicle::toString() + ", NumSeats: " + to_string(numSeats) + "Cargo Size: " + to_string(cargoSize);
}
