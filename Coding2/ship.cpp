

#include "ship.h"
#include "filez.h" 
#include "filez.cpp"
#include <iostream>

// define the constructor
ship::ship() {
	name = "Lilypad";
	fuel = 100; 
	type = FRIGATE;
}

void ship::status() {
	cout << "The good ship " << name << " has " << fuel << ".\n";
	cout << "The ship's type is " << type << "\n";

	switch (type) {
	case FIGHTER: cout << "fighter.\n";
		break;
	case FRIGATE: cout << "firgate.\n";
		break;
	case FREIGHTER: cout << "freighter.\n";
		break;
	case CRUISER: cout << "cruiser.\n";
		break;
	default: cout << "unkown.\n";
		break;
	}
}
