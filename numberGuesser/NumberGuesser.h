#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class NumberGuesser {
private:
    int lowerBound, upperBound;
    int originalLower, originalUpper;
    int currentGuess;

public:
    NumberGuesser(int lowerBound, int upperBound);
    void higher();
    void lower();
    int getCurrentGuess() const;
    void reset();
};

#endif
