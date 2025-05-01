/*
#include <iostream>
#include <string>
using namespace std; 

// use class keyword to create a class name "robot"
// dont forgor the semi-colon after the curly braces.
class robot {
public:			// anyone can see this, call this, change this.
	//Data Members
	string name;
	int charge;
	string phrase;

	//Member Functions
	//function declaratinos, to be defined later.
	//function declartations don't require paramerter names
	robot(string, string, int);
	robot();
	void SayHello();

	// constructor, has to be named same as the class and doesnt have a return type. 
	robot(string givenName, string givenPhrase, int givenCharge) {
		name = givenName;
		phrase = givenPhrase;
		charge = givenCharge;
		cout << "A new robot has been constructed.";
	}

	// overloading the constructor with a "default constructor" 
	robot() {
		cout << "Using the DEFAULT constructor.\n";
		cout << "Hey programmer Dean, pwease fixxy my issue :(";
	}

	void SayHello() {
		cout << "My name is " << name << ", and my charge is " << charge << ".\n";
		cout << phrase << "\n";
	}

private:		// only I can see this, call this, change this. 
protected:
};


int main() {
	cout << "Classes, yeah?\n";

	robot bobert;		// constructor runs here.
	bobert.name = "Bobert Jr";

	cout << "Have a look at this cool as robot named " << bobert.name << ".\n"; 
	cout << "I am currently charging them, their charge is " << bobert.charge << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "My new robot Rob works on the nuclear reactor."; 
	rob.SayHello();

	return 0;
}//end of int main
*/