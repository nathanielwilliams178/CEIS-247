#pragma once
#include <string>
#include "Engine.h"
using namespace std;
class Vehicle
{
protected:
	//attributes
	string vin;
	string make;
	string model;
	short year;
	double price;
	Engine motor;

public:
	Vehicle();
	Vehicle(string vin, string make, string model, short year, double price, Engine motor);
	virtual ~Vehicle() = 0;

	//accessors and mutators

	string getVin(void);
	void setVin(string vin);

	string getMake(void);
	void setMake(string make);

	string getModel(void);
	void setModel(string model);

	short getYear(void);
	void setYear(short year);

	double getPrice(void);
	void setPrice(double price);

	Engine getMotor(void);
	Engine setMotor(Engine motor);

	//behaviors

	double discountPrice(float discountPercent);

	virtual string toString();
};

