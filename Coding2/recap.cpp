

/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>  //for vectors of course
#include <algorithm>
using namespace std; 

//this is where the program starts
int main() {
	srand(time(0));
	bool debug = false;
	// have the computer greet you, then run the program
	cout << "Hello player what is your name?\n";
	string input; 
	getline(cin, input); 
	if (input == "Ribbit") {
		cout << "Ribbit\n"; 
		debug = true; 
		if (debug) cout << "Debug mode is on\n";
	}
	else {
		cout << "Hello " << input << ".\n";
	}


	// build a "guess the number" game.
	// the computer picks a random number between 1 and 10
	// player guesses, the computer says higher, lower, or thats it
	if (false) {
		int theNumber = rand() % 10 + 1;	// this number will be 1-10 (inlcusive)
		if (debug) cout << "The number is " << theNumber << ".\n";
		int guess = 0;
		cout << "I am thinking of a number between 1 and 10.\n Try to guess it.\n";

		while (guess != theNumber) {
			cout << "What is your guess?\n";
			getline(cin, input);
			guess = stoi(input);

			if (guess == theNumber) {
				cout << "You guessed it!\n";
				break;
			}
			if (guess > theNumber) {
				cout << "Too High IDIOT!";
			}
			else {
				cout << "Too Low IDIOT!\n";
			}
		}
	} //end of if (false)

	if (true) {
		// vectors are resizable arrays. 

		// use a collection initializer when creating a new vector (or array) to automatically add new items.
		vector<string> favBooks = { "DogMan", "Micheal Vey", "Beserk", "Vagabond", "Vinland Saga" };

		cout << "The first book in my list of favBooks is " << favBooks[0] << ".\n";

		cout << "Please add another book to the list.\n";
		getline(cin, input);

		favBooks.push_back(input);		//adds another element to the end of the vector

		cout << "There are now " << favBooks.size() << " books in the list.\n"; 
		cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << ".\n"; 

		// useful stuff with vectors, after push_back and varaiable sizes
		// #include <algorithm> for .find(), .sort(), and .shuffle()

		cout << "Here is the unsorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << ".\n"; 
		}

		cout << "Let's sort the list!\n";
		sort(favBooks.begin(), favBooks.end());

		cout << "Here is the sorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << ".\n";
		}

		cout << "Randomly shuffling the list.\n"; 
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "Here is the shuffled list:\n"; 
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << ".\n";
		}

		cout << "Give me a boook from teh list and ill tell you what position it's in.\n";
		getline(cin, input); 
		vector<string>::iterator iter; 
		iter = find(favBooks.begin(), favBooks.end(), input); 

		if (iter != favBooks.end()) {
			cout << *iter << ".\n";
		}
		else {
			cout << "That is not in the list.\n"; 
		}
	}
}
*/