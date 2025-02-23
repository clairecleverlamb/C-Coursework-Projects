#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// prototypes 
void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess(int guess);
int getMidpoint(int low, int high);
int getRandomMidpoint(int low, int high);

int main() {
    srand(static_cast<unsigned>(time(0)));
    do {
        playOneGame();
    } while (shouldPlayAgain());
    return 0;
}

void playOneGame() {
    int low = 1, high = 100;
    char response; 

    cout << "Think of one number between 1 and 100." << endl;
    do {
        int guess = getMidpoint(low, high);
        response = getUserResponseToGuess(guess);
        if (response == 'h'){
            low = guess + 1;
        } else if (response == 'l') {
            high = guess - 1; 
        }
    } while (response != 'c');
    cout << "Great! Do you want to play again? (y/n): ";
}

bool shouldPlayAgain(){
    char choice;
    cin >> choice; 
    return (choice == 'y' || choice == 'Y');
}
char getUserResponseToGuess(int guess) {
    char response; 
    cout << "Is it "<< guess << "? (h/l/c): ";
    cin >> response;
    return response;
}
int getMidpoint(int low, int high) {
    return (low+high)/2;
}
int getRandomMidpoint(int low, int high) {
    return low + rand() % (high - low + 1); // get random number
}
