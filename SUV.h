#pragma once
#include <string>
#include "Vehicle.h"
class SUV : public Vehicle
{
private:
	short numSeats;
	float cargoSize;
public:
	SUV();
	SUV(string vin, string make, string model, short year, double price, short numSeats, float cargoSize, Engine motor);
	virtual ~SUV();

	//accessors and mutators
	short getnumSeats(void);
	void setnumSeats(short numSeats);

	float getcargoSize(void);
	void setcargoSize(float cargoSize);

	string toString();
};

