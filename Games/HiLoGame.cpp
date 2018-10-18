/* This is a High-Low Game in C++.
A random number is generated and the player has to guess it.
The player will get hints if their guess is too high or too low.
The game ends when they win and they choose not to play again. */

// Import libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

// Declare std (standard) namespace, so you can use cout, cin etc without adding std:: beforehand
using namespace std;

// Initialise the main function
int main() {

	// Initialise the number to guess variable as integer
	int theNumber;

	// Initialise a variable to capture the user guess as integer
	int guess = 0;

	// Initialise a variable to capture the number of times a guess was made, as integer
	int tries = 0;

	// playAgain will store the player's answer, which will change game accordingly
	char playAgain;
	bool game = true;

	//Initialise random seed with time (this is to produce a random number every time)
	srand (time(NULL));


	/* <do-while> loop will ensure the <while> loop runs at least once.
	The loop will run while guess is not equal to theNumber */
	do {

		// Generate a random number between 1 and 100
		theNumber = rand() % 100 + 1;

		while (guess != theNumber) {
			// Output message
			cout << "Guess a number between 1 and 100: " << endl;

			// Store user input into guess variable
			cin >> guess;

			// Increment number of tries by 1
			tries++;

			// Check if guess is correct, low or high
			// endl puts a new line at the end of output message
			if (guess < theNumber) {
				cout << guess << " is too low. Try again." << endl;
			}
			else if (guess > theNumber) {
				cout << guess << " is too high. Try again." << endl;
			}
			else {
				cout << guess << " is correct. You win!" << endl;
				cout << "It took you " << tries << " attempts to guess the number." << endl;
			}

		}

		// Ask to play again
		cout << "Do you want to play again? (y/n)" << endl;
		cin >> playAgain;

		/* Convert character to lowercase
		If answer is no (n), game variable will be false and
		the do-while loop will break.
		!!! Use single quotes to compare characters !!!
		*/
		if (tolower(playAgain) == 'n') {
			game = false;
		}

	} while (game);

	cout << "Thank you for playing. Goodbye!";



	return 0;
}
