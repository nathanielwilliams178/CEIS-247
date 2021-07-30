#pragma once
#include <string>
#include "Car.h"
class ECar : public Car
{
private:
	float batterySize;
	short range;
	short mpgE;
public:
	ECar();
	ECar(string vin, string make, string model, short year, double price,
		short numDoors, bool hatchback, float batterySize, short range, short mpgE, Engine motor);
	virtual ~ECar();

	//accessors and mutators
	float getBatterySize(void);
	void setBatterySize(float batterySize);

	short getRange(void);
	void setRange(short range);

	short getmpgE(void);
	void setMpgE(short mpgE);

	//put everything into string
	string toString();
};

