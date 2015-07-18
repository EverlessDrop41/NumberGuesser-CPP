//Guesser.cpp
#include "Guesser.h"
#include "GuessType.h"

Guesser::Guesser (int numberToGuess) {
	this->ValToGuess = numberToGuess;
}

GuessType Guesser::MakeGuess (int val) {
	if (val == this->ValToGuess) {
		return GuessType::Correct;
	}
	else {
		this->Guesses += 1;
		if (val > this->ValToGuess) {
			return GuessType::High;
		}
		else {
			return GuessType::Low;
		}
	}
}