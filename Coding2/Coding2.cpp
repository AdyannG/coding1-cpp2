
// Adyann Gilbert Coding 1 Spring 2025 Week 3
// Variables, Logic, and Randomness
/*
#include <iostream>		//in out stream sends text to and from the console
#include <string>		//allows us to use string variables. 
#include <cstdlib>		// for rand() and srand()
#include <ctime>		// for time()
using namespace std;	// so we don't have to type "std::" all the time. 
																																
//this is where the program starts running!
//it's a function that returns an integer.
int main() { 
	srand(time(0));
	cout << "Here's a random number for you: " << rand() << ".\n";
	cout << "Here's a random number for you: " << rand() << ".\n";
	cout << "Here's a random number for you: " << rand() << ".\n";
	cout << "Here's a random number for you: " << rand() << ".\n";

	// modulus gives remainder of long division
	cout << "7 divided by 2 = " << 7 / 2 << " with a remainder of " << 7 % 2 << ".\n";

	cout << "A random number between 1 and 10 (inclusive); " << (rand() % 10) + 1 << ".\n";

	// 1-10 inclusive could be 1 or 10
	// 1-10 exclusive cant be 1 or 10 only 2-9

	cout << "here are this week's grades for the class. (between 50 and 100).\n";
	int counter = 0;
	while (counter < 10) {
		counter += 1;	// explain after the break
		cout << (rand() % 50) + 50 << "\n";
	}

	cout << "Hello! What is your name?\n";
	string input;							// create a variable to hold player's input
	cin >> input;							// assign input from console to input variable


	if (input == "Adyann") {
		cout << "What is the Password?\n";
		cin >> input;
		if (input == "Frog") {
			cout << "Hello Creator!\n";
		}
		else {
			cout << "Sussy Baka!!!\n";
			return 0;					// quits out of the program early 
		}
	}
	//the default statement
	else {
		cout << "Hello " << input << ".\n";
	}


	cout << "Are you ready to play a game?\n";
	// a character is a single character, anything you can type on your keyboard
	char playerCharInput = 'n';
	// a string is and ordered list of characters. 
	string name = "Adyann";

	int totalTurns = 0;
	do {
		cout << "Press 'y' to keep playing. \n";		//Ask player for input 
		cin >> playerCharInput;							// get input 
		totalTurns += 1;			// explain increment and comdbined assignment operators (does the math and assings new value)
									// ++ adds 1 -- subctracts 1, Incremeant operators

	} while (playerCharInput == 'y');

	//todo: use a switch statement (next time)
	cout << " You entered 'y' " << totalTurns << "times!\n";




	//all code inside a code block should be indented 
	cout << "\tWelcome to Week 3!\n";
	cout << "We're taliking about Variavles, Logic, and Randomness today.\n";

	// Variables are nicknames for data
	// creating a variable of the type integer
	// named "age"
	// with the defined value of 18
	int age = 18;
	int score = 0;		// declaring the variable, but not defining the variable 

	cout << "Always initialized your variables.\n";

	// let's talk camalCase
	// capitalize each new word after the first one
	int playerOneFuelAmount = 43;

	// an integer is a whole number, positive or negative, between -2bil and +2bil. 
	int oceanDepth = -234;

	// floats are floating-point numbers. they have a decimal point!
	// they're accure to 7-digits
	// creating a constant float named "pi" with the value of "3.1415".
	const float pi = 3.145f;

	// doubles are double-percsision floating point numbers. accurate to 22-digits.
	double someNumberWithDecimalPlaces = 3456.7898456534;

	// task is to send thes 4 numbers to the console. then run the program.
	cout << "Player 1's fuel amount is " << playerOneFuelAmount << ".\n"; 
	cout << "Ocean Depth is " << oceanDepth << ".\n";
	cout << "I could eat " << pi << " pi's.\n";
	cout << "Want to see a number with decimal places? " << someNumberWithDecimalPlaces << " You're welcome.\n";

	// when using random numbers, don't forget to 
	// #include <cstdlib>		// for rand() and srand()
	// #include <ctime>			// for time()
} //end of main
*/