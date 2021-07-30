#include "Vehicle.h"

Vehicle::Vehicle()
{
	string vin = "unknown";
	string make = "unknown";
	string model = "unknown";
	short year = 0;
	double price = 0.0;
	//motor is created by default constructor
}

Vehicle::Vehicle(string vin, string make, string model, short year, double price, Engine motor)
{
	setVin(vin);
	setMake(make);
	setModel(model);
	setYear(year);
	setPrice(price);
	setMotor(motor);
}

Vehicle::~Vehicle()
{
}


string Vehicle::toString()
{
	return "Vin: " + vin + ", Make: " + make + ", Model: " + model +
		", Year: "; to_string(year) + ", Price: " + to_string(price) + "NumCylinders: " + to_string(motor.getCylinders())
		+ "Horsepower: " + to_string(motor.getHorsepower());
}


double Vehicle::discountPrice(float discountPercent)
{
	double newPrice = price - (price * discountPercent);
	return newPrice;
}

string Vehicle::getVin()
{
	return vin;
}

void Vehicle::setVin(string vin)
{
	if (vin.length() == 17)
	{
		this->vin = vin;
	}
	else
		this->vin = "Unknown";
}

string Vehicle::getMake(void)
{
	return make;
}


void Vehicle::setMake(string make)
{
	if (make.length() > 0)
		this->make = make;
	else
		this->make = "Unknown";
}

string Vehicle::getModel(void)
{
	return model;
}

void Vehicle::setModel(string model)
{
	if (model.length() > 0)
		this->model = model;
	else
		this->model = "Unknown";
}


short Vehicle::getYear(void)
{
	return year;
}


void Vehicle::setYear(short year)
{
	if (year > 1980)
		this->year = year;
	else
		this->year = 0;
}

double Vehicle::getPrice(void)
{
	return price;
}

void Vehicle::setPrice(double price)
{
	if (price > 0.0 && price < 100000.00)
		this->price = price;
	else
		this->price = 0.0;
}

Engine Vehicle::getMotor(void)
{
	return motor;
}

Engine Vehicle::setMotor(Engine motor)
{
	return this->motor = motor;
}
