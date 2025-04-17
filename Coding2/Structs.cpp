/*
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD structures 
// a custom variable type

struct enemy {
	// These data members are public by default. 
	int health; 
	int damage; 
	string name;
	enemyType type; 

};

struct address {
	string streetName;
	int streetNumber;
	string city;
	string stateCode;
	int zipCode;
};

struct employee {
	int Id = 0; 
	string name;
	int age;
	// string adress;
	address addr; 
	float wage;
};

string AddressOneLine(address addr){
	string oneLine;
	oneLine += to_string(addr.streetNumber);
	oneLine += " " + addr.streetName;
	oneLine += ", " + addr.city;
	oneLine += ", " + addr.stateCode;
	oneLine += ", " + to_string(addr.zipCode);

	return oneLine;
}

int main() {
	cout << "Structures!/n"; 
	
	enemy lemon;
	lemon.health = 7; 
	lemon.damage = 4;
	lemon.name = "Evil Lemon";
	lemon.type = GRUNT; 

	cout << "Here's " << lemon.name << "! Their health is " << lemon.health << ".\n"; 

	enemy lime; 
	lime.health = 15;
	lime.damage = 8; 
	lime.name = "Evil Lime"; 
	lime.type = MINIBOSS; 

	cout << lemon.name << " is attacking " << lime.name << "!!\n"; 
	lime.health -= lemon.damage; 

	if (lime.health < 1) {
		cout << lime.name << "has been killed!\n"; 
	}
	else {
		cout << lime.name << " has " << lime.health << " health left.\n";
	}

	vector<enemy> enemies; 

	enemies.push_back(lemon);
	enemies.push_back(lime);

	cout << "Status of all enemies:\n"; 
	for (int i = 0; i < enemies.size(); i++) {
		cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
		cout << "Their damage is " << enemies[i].damage << " and their type is ";
		switch (enemies[i].type) //One test on an int. mapped to many cases. 
		{
		case GRUNT:
			cout << "grunt";
			break;
		case MINIBOSS: 
			cout << "miniboss"; 
			break;
		case BOSS:
			cout << "Boss";
			break;
		default: 
			cout << "UnKnoWN"; 
			break; 
		}
		cout << ".\n";

	}

	employee adyann;
	adyann.Id = 9121; 
	adyann.name = "Adyann Gilbert";
	adyann.age = 18;
	adyann.wage = 10.07f; 
	adyann.addr.streetNumber = 24;
	adyann.addr.streetName = "Nonya";
	adyann.addr.city = "Blue Springs";
	adyann.addr.stateCode = "MO"; 
	adyann.addr.zipCode = 12345;


	cout << adyann.name << " lives at " << AddressOneLine(adyann.addr) << ".\n";
	return 0; 
} // end of intmain 
*/