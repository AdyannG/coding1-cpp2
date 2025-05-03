/*
#include <iostream>
#include <string>
using namespace std;

class human {

protected:		// change from private to allow child to inherit these variables 

	string name;
	int health = 30, damage = 15;

public:
	human(string, int, int);
	human() {
		health = 10;
		damage = 4;
		name = "Unkown";
	}
	void SayHello();
	void SayGoodbye();

	void SetHealth(int baseHealth) {
		if (baseHealth < 1) {
			health = 0;
			cout << "Oh no! " << name << " died!\n";
		}
		else {
			health = baseHealth;
			cout << name << " has " << health << " hit points left!\n";
		}
	}

	void SetDamage(int baseDamage) {
		baseDamage = 10; 
	}

	void ChangeHealth(int by = 1) {
		int tempHealth = health;
		tempHealth += by;
		SetHealth(tempHealth);
	}

	int GetHealth() {
		return health;
	}
	int GetDamage() {
		return damage;
	}


	void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;     // return nothing out of a void function to end the function. THIS WILL NOT END THE PROGRAM
		}
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;
		}
		else {
			name = givenName;
		}
	}
	string GetName() {
		return name;
	}



protected:

};

// Constructors
human::human(string givenName, int baseHealth, int baseDamage) {
	name = givenName;
	health = baseHealth;
	damage = baseDamage;

	cout << "I have shown up!\n";
}

void human::SayHello() {
	cout << "Hello! My name is " << name << " and my total health is " << health << ".\n";
}

void human::SayGoodbye() {
	cout << "See ya later.\n";
}

int main() {
	human adyann;
	adyann.SetName("Adyann Gilbert");
	adyann.SetHealth(50);

	cout << "Hey this is  " << adyann.GetName() << " they have " << adyann.GetHealth() << " hit points and they can do  " << adyann.GetDamage() << " points of damage!\n";
	cout << "Greet everyon human!\n";
	adyann.SayHello();

	adyann.ChangeHealth(-30);
	cout << "Oh no! Adyann decided to go adventuring and took an arrow to the knee!\n";
	cout << "They now have " << adyann.GetHealth() << " hit points left!\n";

	adyann.SayGoodbye();

	return 0;
}
*/