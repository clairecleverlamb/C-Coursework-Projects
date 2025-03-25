#include "NumberGuesser.h"

NumberGuesser::NumberGuesser(int lowerBound, int upperBound) 
    : lowerBound(lowerBound), upperBound(upperBound), 
      originalLower(lowerBound), originalUpper(upperBound) {
    currentGuess = (lowerBound + upperBound) / 2;
}

void NumberGuesser::higher() {
    lowerBound = currentGuess + 1;
    currentGuess = (lowerBound + upperBound) / 2;
}

void NumberGuesser::lower() {
    upperBound = currentGuess - 1;
    currentGuess = (lowerBound + upperBound) / 2;
}

int NumberGuesser::getCurrentGuess() const {
    return currentGuess;
}

void NumberGuesser::reset() {
    lowerBound = originalLower;
    upperBound = originalUpper;
    currentGuess = (lowerBound + upperBound) / 2;
}
