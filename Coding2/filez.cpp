

#include "ship.h"
#include "filez.h" 


void WriteToFile(string givenString) {
	// open (or create) the file
	ofstream file("file.txt", ios::app);

	//earlt return if the ffile cannot be opened
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}
	// confirm that the file is open 
	// write text to the open file 
	file << givenString;
	// close the file (wich svaes it to disk
	file.close();
}

void ReadFromFile() { //ran out of time string* arr and line 45-47 unreliable
	string fileContents;

	// open the file
	ifstream file("file.txt");

	//check that it's actually open
	if (!file.is_open()) {
		cout << "could not open the file.\n";

	}

	// cout everything in the file 
	while (getline(file, fileContents)) {
		cout << fileContents << ".\n";
	}

	//close the file
	file.close();
}

void WriteShipToFile(ship givenShip) {
	cout << "Writing " << givenShip.name << " to file.\n"; 

	// open (or create) the file
	ofstream file("Ship.txt", ios::app);

	//earlt return if the ffile cannot be opened
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}
	// confirm that the file is open 
	// write text to the open file 
	file << givenShip.name;
	file << givenShip.fuel;

	// close the file (wich svaes it to disk
	file.close();
}
