//Guesser.h
#ifndef GUESSER
#define GUESSER
#include "GuessType.h"
public class Guesser {
public:
	Guesser Guesser (int numberToGuess);
	int ValToGuess;
	int Guesses = 0;
	GuessType MakeGuess(int val);
}
#endif