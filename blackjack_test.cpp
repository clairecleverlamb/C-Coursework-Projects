// BlackJack, 2 cards to start with
// Claire Chen, cs110B

//generating a single random card btw 1 to 10; 
// generating 2 cards and add them together to store the total; 
// Add a loop, asking want another card or not
// move the display of the total to the loop; 
// Generate a new card in each loop and display the value
// Update the total in each loop.
// Check to see if the user busts in each loop
// Wrap the game in loop that handles the Play-Again functionality;


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandomCard() {
    return rand() % 10 + 1;
}

void playBlackJack(){ 
    char choice; 

    int card1 = getRandomCard();
    int card2 = getRandomCard();
    int playerTotal = card1 + card2; 
    int dealerTotal = 0;

    cout << "First card: " << card1 << ", " << card2 << endl;
    cout << "Total: " << playerTotal << endl;

    // Player
    while (true) {
        cout << "Do you want another card? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y'){
            int newCard = rand() % 10 + 1;
            playerTotal += newCard; 
            cout << "Card: " << newCard << endl;
            cout << "Total: " << playerTotal << endl;

            if (playerTotal > 21) {
                cout << "Bust! You went over 21! The dealer wins.\n";
                return; // End the game immediately
            }
        } else if (choice == 'n' || choice == 'N'){
            break;
        } else {
            cout << "Invalid input, please try again! (y/n). \n ";
        }
    }

    // Dealer
    dealerTotal = getRandomCard();
    cout << "The dealer starts with a " << dealerTotal << endl;

    while (dealerTotal < 17) {
        cout << "(c to continue): ";
        cin >> choice; 

        if (choice == 'c' || choice == 'C'){
            int dealerCard = getRandomCard();
            dealerTotal += dealerCard;
            cout << "Dealer gets a " << dealerCard << endl;
            cout << "Dealer Total: " << dealerTotal << endl;

            if (dealerTotal > 21){
                cout << "Dealer busts! You win! \n";
                return;
            }
        } else {
                cout << "invalid input! Please press 'c' to continue.\n";
        }
    }

    //Winner;
    cout << "Your Total: " << playerTotal << endl; 
    cout << "Dealer Total: " << dealerTotal << endl;

    if (playerTotal > dealerTotal) {
        cout << "You win!\n";
    } else if (dealerTotal > playerTotal) {
        cout << "Dealer wins!\n";
    } else {
        cout << "Push!\n";
    }
}

int main(){
    srand(static_cast<unsigned>(time(0))); 
    char playAgain;
    do {
        playBlackJack();
        cout << "Play again?(y/n): ";
        cin >> playAgain; 
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing! Bye!\n";
    return 0;
}