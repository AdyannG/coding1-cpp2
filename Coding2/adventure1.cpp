#include <iostream>		//in out stream sends text to and from the console
#include <string>		//allows us to use string variables. 
#include <cstdlib>		// for rand() and srand()
#include <ctime>		// for time()
using namespace std;



int main() {
	cout << "Welcome Player! Are you ready for an adventure y or n? \n";
	string playerInput;
	cin >> playerInput; 
	if (playerInput == "y") {
		cout << "Great! get ready for the adventure of a lifetime. \n"; 
	}
	else {
		cout << "Lameo";
		return 0;
	}
	int health = 5;
	int attack = 0;
	int block = 0; 
	int turns = 0; 
																																		
	do {
		srand(time(0)); 
		turns += 1; 
		attack = (rand() % 5);
		cout << "You walk into a room and an enemy attacks you! \n"; 
		block = (rand() % 5); 
		if (block > attack) {
			cout << "you blocked the attack! \n"; 
		}
		else {
			health = (health - attack);
			cout << "You failed to block the attack and now have " << health << "health left! \n";
		}
		cout << "Would you like to contiue your adventrue y or n? \n"; 
		cin >> playerInput; 
		if (playerInput == "n") {
			cout << "Congradulations you survived" << turns << " rooms!\n";
			return 0; 
		}
		if (playerInput == "y") {
			if (turns == 4) {
				cout << "Congradulations you've made it through the dungeon!\n"; 
				return 0; 
			}
		}
	} while (health > 0); 
	if (health <= 0) {
		cout << "You died\n";
		return 0;
	}
}