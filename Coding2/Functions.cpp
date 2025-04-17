/*
#include <iostream>
#include <string> 
using namespace std; 

//global variables are dangerous 
// global variables exist in all funstions in this source file 
const bool debug = true; 
string input;

//Functions!
//f(x) = y 
//f(input) = output
//f(2) = 4 
//f(3) = 6 

// all functions have a return type, a name, and (input parameters)
//declaring and defining a new function named "sayHello"
//it has a teturn type of void, which means nothing 
//it has one input parameter named "greeting" with a default value of "Hello!" 
void sayHello(string greeting = "Hello!") {
	cout << greeting << "\n"; 
}
void sayBye(string farwell = "Goodbye!") {
	cout << farwell << "\n"; 
}


int triple(int givenNumber) {
	if (debug) cout << "givenNumber: " << givenNumber << ".\n"; 

	return givenNumber * 3;			// this is the output of the function 
}

double triple(double givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n"; 

	return givenNumber * 3; 
}

string triple(string givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

	return givenNumber + givenNumber + givenNumber + givenNumber;
}

int theNumber; 

int randomNumber(int chosenNumber = theNumber) {
	int maxRand;
	int minRand;
	cout << "Let's get a random number.\n pick a minimum number.\n";
	getline(cin, input);
	minRand = stoi(input);
	cout << "Now decide a maxium number.\n";
	getline(cin, input); 
	maxRand = stoi(input); 
	theNumber = rand() % maxRand + minRand; 
	cout << theNumber; 
}
 

int randomNumberInRange(int min, int max) {
	if (min >= max) {
		cout << "I can't use those numbers.\n";
		return -1;
	}

	int range = (max - min) + 1; 
	return rand() % range + min;
}
//creating a new functino named "getPlayerName"
//return type is string, with two input parameters for minSize and maxSize
string getPlayerName(int minSize = 5, int maxSize = 16) {

	do {
		cout << "What is your name?\n"; 
		getline(cin, input); 

		//data valadation 
		if (input.size() < minSize) {
			cout << "Your name needs to be at least " << minSize <<" charaters long.\n"; 
		}
		else if (input.size() > maxSize) {
			cout << " Your name needs to be fewer than " << maxSize + 1 << "characters long.\n";
		}
		else {
			string greeting = "Hello " + input + "!"; 
			sayHello(greeting);
			return input;
		}
	} while (true); 
}


int main() {
	sayHello();
	sayHello("Ready to see some basic coding?");
	 
	cout << "Min = what?:"; 
	getline(cin, input); 
	int min = stoi(input); 

	cout << "Max = what?:"; 
	getline(cin, input);
	int max = stoi(input);

	cout << "A random number between " << min << " and " << max; 
	cout << " is " << randomNumberInRange(min, max) << ".\n";
	
	string playerName = getPlayerName(); 

	cout << "Triple of 9 is " << triple(9.3) << ".\n"; 


	string food[11];
	string input; 
	
	cout << "What are your favorite foods?\n"; 

	for (int i = 0; i < 3; i++) {
		cout << "fav food # " << i + 1 << ":"; 
		getline(cin, input); 

		food[i] = input; 
	}
	
	cout << "Here are your favorite foods:\n"; 
	for (int i = 0; i < 3; i++) {
		cout << food[i] << ".\n";
	}
	sayBye();
	sayBye("Loser");

} // end of main
*/