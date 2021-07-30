#include "ECar.h"

ECar::ECar()
{
	float batterySize = 0.0f;
	short range = 0;
	short mpgE = 0;
}

ECar::ECar(string vin, string make, string model, short year, double price,
	short numDoors, bool hatchback, float batterySize, short range, short mpgE, Engine motor) 
	: Car(vin, make, model, year, price, numDoors, hatchback, motor)
{
	setBatterySize(batterySize);
	setRange(range);
	setMpgE(mpgE);
}

ECar::~ECar()
{
}

float ECar::getBatterySize(void)
{
	return batterySize;
}

void ECar::setBatterySize(float batterySize)
{
	if (batterySize > 0.0f)
		this->batterySize = batterySize;
	else
		this->batterySize = 0.0f;
}

short ECar::getRange(void)
{
	return range;
}

void ECar::setRange(short range)
{
	if (range > 0)
		this->range = range;
	else
		this->range = 0;
}

short ECar::getmpgE(void)
{
	return mpgE;
}

void ECar::setMpgE(short mpgE)
{
	if (mpgE > 0)
		this->mpgE = mpgE;
	else
		this->mpgE = 0;
}

string ECar::toString()
{
	return Car::toString() + "Battery Size: " + to_string(batterySize) + "Range: " + to_string(range) + "MPGE: " + to_string(mpgE);
}
