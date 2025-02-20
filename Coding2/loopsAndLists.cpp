// Coding1 Feb 20th, loops & lists 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));		// seeds random numbers
	cout << "Welcome to week 5!\n";
	 
	// if/else if/else
	// variables
	// while and do-while
	//random

	cout << "What program would you like to run?\n";
	cout << "Press 1 for keep playing.\n";
	cout << "Press 2 for player name.\n";

	string input;		//make a variable to store the input from the player
	getline(cin, input);	// gegt the input from player

	//test input from the player
	//stoi() stands for "string to integer" and converts a string to an integer (if it can)
	if (stoi(input) == 1) {
		cout << "Let's start the Keep Playing program!\n";
	}
	else if (stoi(input) == 2) {
		cout << "Let's start the Player Name program\n";
	}
	else {
		cout << "Sorry I didn't understand that request.\n";
	}

	//covering
	//list
		//arrays
		//vectors
	//loops
		//for loops
	// more logic
		// switch statment
		// if/elseif/esle

	//arrays
	string colors[4];
	colors[0] = "Red";
	colors[1] = "Blue";
	colors[2] = "Green";
	colors[3] = "Yellow"; 

	cout << "The first color in our array of colors is " << colors[0] << ".\n";

	int iterator = 0;				// the iterator counts starting at 0
	while (iterator < 4) {			// loop as long as we're less than array size
		cout << colors[iterator] << "\n";	//send the array element's value to the console.
		iterator += 1;				// add 1 to the iterator
	}

	// let's build a new list, using player input.
	cout << "Who are your best friends?\n";

	//Keep using string input from earlier.
	string bestfriends[10];				// size of 10. arrays must specify size in c++
	int currentElement = 0;				// this points at next avalable spot in array
	do {
		cout << "Enter a name, or type 'quit' to quit.\n";
		getline(cin, input);				// using cin, get input and assing it to temp

		if (input == "quit") {
			break;
		}
		bestfriends[currentElement++] = input; 
	} while (currentElement < 10);			// ! is not the operator.

	cout << "Here are all of your best friends.\n"; 
		// for(setup, test, action) 
	for (int i = 0; i < currentElement; i++) {
		cout << bestfriends[i] << "\n";
	}

	// create an array of 33 random numbers between 1777 and 2025
	// then, tell the user what the highest number in that array is. 
	
	int min = 1777; 
	int max = 2025;
	int range = max - min;
	int randomYear = (rand() % (range + 1)) + min;
	int randomYears[33]; 
	
	cout << "Here's some random years between 1777 and 2025.\n"; 
	for (int i = 0; i < 33; i++) {
		randomYears[i] = (rand() % (range + 1)) + min;
		cout << randomYears[i] << "\n";
	}
	int highscore = 0;
	for (int i = 0; i < 33; i++) {
		if (randomYears[i] > highscore) {
			highscore = randomYears[i];
		}
	}
	cout << "And here's the most recent year " << highscore << ".";

	return 0; 
}
