#include <iostream>
#include <string>
using namespace std;
								
int main() {
	cout << "What are your top 5 games? \n"; 
	cout << "You can...\n 'add' a game.\n 'edit' a game on the list.\n 'remove' a game from the list.\n 'show' your current list.\n 'quit' to leave the program.\n You can only have 5 games\n";
	string input;
	string favGames[5];
	int currentGames = 0;
	
	do{
		cout << "Would you like to add, edit, remove, show, or quit? \n";
		getline(cin, input);
		 
		if(input == "add") {
			cout << "Please enter game title.\n";
			getline(cin, input);
			favGames[currentGames++] = input;
		}
			
		else if(input == "edit") {
			cout << "What game would you like to edit?\n";
			getline(cin, input);
			for (int i = 0; i < currentGames; i++) {
				if (favGames[i] == input) {
					cout << "I have found the game you're looking for, what do you want to change it to.\n";
					getline(cin, input);
					favGames[i] = input;
					cout << "Game has been updated";
				}
			}
		}
			
		else if (input == "remove") {
			cout << "What game would you like to remove?";
			getline(cin, input);
			for (int i = 0; i < currentGames; i++) {
				if (favGames[i] == input) {
					cout << "I have found the game you're looking for, deleting it now.\n";
					favGames[i] = "";
					cout << "Game has been removed";
				}
			}
		}
		else if (input == "show") {
			cout << "Here are your Games.";
			for (int i = 0; i < currentGames; i++) {
			}
		}
				else if (input == "quit") {
					cout << "See ya later!";
					break;
				}
			}while (true);
		}