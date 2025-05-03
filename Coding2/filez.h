#pragma once
#include "ship.cpp"
#include "ship.h"
#include "filez.cpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void WriteToFile(string givenString); 
void ReadFromFile();
void WriteShipToFile(ship givenShip);