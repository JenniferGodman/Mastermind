#pragma once
#include <vector>
#include <iostream>

class Game {
public:
	Game(int l, int t) {
		length = l;
		trys = t;
	}

	void play() {
		std::cout << "Playing mastermind gessing " << length << " characters in max " << trys << " trys\n\n";
		initialise();

		// while loop start for trys, every time they enter 'length' letters, set up and the loop 'trys' times

		// get guess
		getGuess();
		// check gues,mark the letters and position are correct or not
		// if guess allcorrect winn and the game end
		if (guessCorrect()) {
			std::cout << "You win!";
			exit(0);
		}
		// output guess resuts
		outputResultOfGuess();

		// end while loop after 10 times if guess incorrect
		// you lost
	}


private:
	int length, trys;
	//std::vector target;

	/**
	* Create data
	* Initialise the target vector with 'length' random characters to be guessed.
	*
	*/
	void initialise() {

	}

	/**
	* Input guess
	* Get the users guess of 'length' letters.
	*
	*/
	void getGuess() {

	}

	/**
	* Display the results of the guess
	*/ 
	void outputResultOfGuess() {

	}

	/**
	* check to see if teh gues is correct
	*/ 
	bool guessCorrect() {
		return false;
	}
};
