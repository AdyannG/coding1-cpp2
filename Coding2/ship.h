#pragma once

#include "ship.cpp"
#include "filez.h" 
#include "filez.cpp"
#include <string>
using namespace std;

// This specifies the different types of ships
enum shipType {FIGHTER, FRIGATE, FREIGHTER, CRUISER};

class ship
{
public: 
	string name; 
	int fuel;
	shipType type;

	ship();			// the constructor
	void status();  //
};

