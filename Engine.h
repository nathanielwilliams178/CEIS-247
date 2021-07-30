#pragma once
#include <string>
using namespace std;

class Engine
{
private:
	short numCylinders;
	short horsepower;
public:
	//constructor, destructor,overloaded
	Engine(void);
	Engine(short numCylinders, short horsepower);
	~Engine(void);
	//accessors and mutators
	short getCylinders(void);
	short getHorsepower(void);
	short setCylinders(short numCylinders);
	short setHorsepower(short horsepower);
	//behaviors
	string toString(void);
};

