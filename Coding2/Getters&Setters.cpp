/*
#include <iostream>
#include <string>
using namespace std;

// use class keyword to create a class name "robot"
// dont forgor the semi-colon after the curly braces.
class robot {
private:
	//Data Members
	string name;
	int charge = 10, maxCharge = 100, minCharge = 0;
	string phrase;

	

public:
	void SayHello();
	//Member Functions
	//function declaratinos, to be defined later.
	//function declartations don't require paramerter names
	robot(string, string, int);
	robot();

	//setters and getters give access to private variabales 
	//through whatever tests we want to write

	// setCharge clamps charge to a range of 0-100 (inclusive)
	// Setters will always have an input parameter
	void setCharge(int givenCharge) {
		if (givenCharge < 0) {
			charge = 0;
		}
		else if (givenCharge > 100) {
			charge = 100;
		}
		else {
			charge = givenCharge; 
		}
	}
	void changeCharge(int by = -1) {
		charge += by; 
		setCharge(charge); 
	}
	// Getters will alwya have a return type
	int getCharge() {
		return charge; 
	}
	void setName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;
		} 
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;
		}
		else {
			name = givenName;
		}
	}
	
	string getName() {
		return name;
	}

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

protected:
};


int main() {
	cout << "Classes, yeah?\n";

	robot bobert;		// constructor runs here.
	bobert.setName("Bobert Junior");
	bobert.setCharge(5);
	cout << "Have a look at this cool as robot named " << bobert.getName() << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.getCharge() << ".\n";

	bobert.changeCharge(50);
	cout << "Two hours later bobert's charge is now " << bobert.getCharge() << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "My new robot Rob works on the nuclear reactor.";
	rob.changeCharge(-200); // nuclear reactor incident 
	rob.SayHello();

	return 0;
}//end of int mai
*/