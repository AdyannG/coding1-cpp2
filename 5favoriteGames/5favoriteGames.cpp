#include <iostream>
#include <string>
using namespace std;


int main() {
	cout << "What are your top 5 games? \n";
	cout << "You can...\n 'add' a game.\n 'edit' a game on the list.\n 'remove' a game from the list.\n 'show' your current list.\n 'quit' to leave the program.\n You can only have 5 games\n";
	string input;
	string favGames[5];
	int currentGames = 0;

	while (currentGames < 5) {
		cout << "Would you like to add, edit, remove, show, or quit? \n";
		getline(cin, input);

		if (input == "add"); {
			cout << "Please enter game title.\n";
			getline(cin, input);
			favGames[currentGames++] = input;
		}

		if (input == "edit"); {


		}

		if (input == "remove"); {


		}
		if (input == "show"); {


		}

		if (input == "quit"); {
			break;
		}
	}

}
