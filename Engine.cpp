#include "Engine.h"

Engine::Engine(void)
{
	numCylinders = 0;
	horsepower = 0;
}

Engine::Engine(short numCylinders, short horsepower)
{
	 setCylinders(numCylinders);
	 setHorsepower(horsepower);
}

Engine::~Engine(void)
{
}

short Engine::getCylinders(void)
{
	return numCylinders;
}

short Engine::getHorsepower(void)
{
	return horsepower;
}

short Engine::setCylinders(short numCylinders)
{
	if (numCylinders > 0 && numCylinders < 13)
		return this->numCylinders = numCylinders;
	else
		return this->numCylinders = 0;
}

short Engine::setHorsepower(short horsepower)
{
	if (horsepower > 0 && horsepower < 1000)
		return this->horsepower = horsepower;
	else
		return this->horsepower = 0;
}

string Engine::toString(void)
{
	return "numCylinders: " + to_string(numCylinders) + "horsepower: " + to_string(horsepower);
}
