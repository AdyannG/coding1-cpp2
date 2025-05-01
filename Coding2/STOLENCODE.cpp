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
		else if (baseHealth > 30) {
			health = 30;
			cout << name << " is at full health!\n";
		}
		else {
			health = baseHealth;
			cout << name << " has " << health << " hit points left!\n";
		}
	}

	void SetDamage(int baseDamage) {
		if (health < 15) {
			baseDamage = 5;
		}
		else if (health > 15) {
			baseDamage = damage;
		}
	}

	void ChangeHealth(int by = 1) {
		int tempHealth = health;
		tempHealth	+= by;
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

//the wizard class inherits from the human class.
// everything that the human class has, so does the wizard.
class wizard : public human {
public:
	int mana = 5; 

	void castSpell() {
		cout << name << " casts a spell!\n"; 
	}

	// build a speel that posions any human; 
	// it wil cut their health in half
	void posion(human& target) {		//without the & it only posions the cloned target and not the original human. 
		cout << "The wizard " << name << " has posioned " << target.GetName() << "!!\n";
		int halfOfTargetHealth = target.GetHealth() / 2;
		target.ChangeHealth(-halfOfTargetHealth);
	}


};

class rouge : public human {
public: 
	int sneak = 5;
	int agility = 5; 
	 
	void pickPocket() {
		if (sneak + agility >= 10) {
			cout << name << " has stolen something!\n"; 
		}
		else {
			cout << name << " failed to pickpocket.\n";
			sneak - 1;
		}
	}
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
	cout << "I was recalled to the factory for medical help.\n";
}



int main() {

	wizard moneymancer; 
	moneymancer.SetName("MoneyMancer"); 
	moneymancer.SayHello();
	moneymancer.castSpell(); 

	rouge goblin; 
	goblin.SetName("Filthy Goblin");
	goblin.SayHello(); 
	goblin.pickPocket(); 

	cout << "Are you read to meet my new human?\n";

	human kaydyn;
	kaydyn.SetName("Kaydyn Wilson");
	kaydyn.SetHealth(50);

	moneymancer.posion(kaydyn); 

	cout << "[Checking health after posion]\n";

	cout << "This is my new human! Their name is " << kaydyn.GetName() << " and they have a base health of " << kaydyn.GetHealth() << " hit points and at full health they can do " << kaydyn.GetDamage() << " points of damage!\n";
	cout << "Greet everyon human!\n";
	kaydyn.SayHello();

	kaydyn.ChangeHealth(-14);
	cout << "Oh no! Kaydyn decided to go adventuring and they came back hurt!\n";
	cout << "They now have " << kaydyn.GetHealth() << " hit points left and can only do " << kaydyn.GetDamage() << " points of damage now!\n";

	kaydyn.SayGoodbye();

	return 0;
}
*/
