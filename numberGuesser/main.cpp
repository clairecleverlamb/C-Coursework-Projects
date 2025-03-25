#include <iostream>
#include "NumberGuesser.h"

using namespace std;

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        cout << "Think of a number between 1 and 100" << endl;
        NumberGuesser guesser(1, 100);
        char response;

        do {
            cout << "Is the number " << guesser.getCurrentGuess() << "? (h/l/c): ";
            cin >> response;

            if (response == 'h' || response == 'H') {
                guesser.higher();
            } else if (response == 'l' || response == 'L') {
                guesser.lower();
            }
        } while (response != 'c' && response != 'C');

        cout << "You picked " << guesser.getCurrentGuess() << "? Good pick!" << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Goodbye!" << endl;
    return 0;
}
