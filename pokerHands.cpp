// PokerHands: a program that reads five cards from the user
// then analyzes the cards and prints out the category of poker hand that they represent.  
// labels: four of a kind, full house, straight, three of a kind, two pairs, pair, high card.
// CS110, Claire Chen

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int HAND_SIZE = 5; 

void getHand(int hand[]) {
    cout << "Enter five numeric cards, no face cards. Use 2 - 9.\n";
    for (int i = 0; i < HAND_SIZE; i++) {
        cout << "Card " << i + 1 << ": " ;
        cin >> hand[i];
    }
}

// Pair
bool containsPair(int hand[]){
    int counts[10] = {0};  // count 2-9 
    for (int i = 0; i < HAND_SIZE; i++){
        counts[hand[i]]++;
    }
    for (int i = 2; i <= 9; i++){
        if (counts[i] == 2) {
            return true;
        }
    } 
    return false;
}

// Two Pair
bool containsTwoPairs(int hand[]){
    int counts[10] = {0},  pairCount = 0; // count 2-9 
    for (int i = 0; i < HAND_SIZE; i++){
        counts[hand[i]]++;
    }
    for (int i = 2; i <= 9; i++){
        if (counts[i] == 2) {
            pairCount++;
        }
    } 
    return pairCount == 2;
}

// Three of a kind
bool containsThreeOfaKind(int hand[]){
    int counts[10] = {0}; // count 2-9 
    for (int i = 0; i < HAND_SIZE; i++){
        counts[hand[i]]++;
    }
    for (int i = 2; i <= 9; i++){
        if (counts[i] == 3) {
            return true;
        }
    } 
    return false;
}

// Straight - order does not matter, sort them 
bool containsStraight(int hand[]){
    sort(hand, hand+ HAND_SIZE); 
    
    for (int i = 1; i < HAND_SIZE; i++){
        if (hand[i] != hand[i-1] + 1){
            return false;
        }
    } return true;
}

// Full House
bool containsFullHouse(int hand[]){
    bool hasThree = false, hasPair = false; 
    int counts[10] = {0}; // count 2-9 
    for (int i = 0; i < HAND_SIZE; i++){
        counts[hand[i]]++;
    }
    for (int i = 2; i <= 9; i++){
        if (counts[i] == 3) hasThree = true;
        if (counts[i] == 2) hasPair = true;
    } 
    return hasThree && hasPair;
}

// Four of a kind
bool containsFourOfaKind(int hand[]){
    int counts[10] = {0}; // count 2-9 
    for (int i = 0; i < HAND_SIZE; i++){
        counts[hand[i]]++;
    }
    for (int i = 2; i <= 9; i++){
        if (counts[i] == 4) {
            return true;
        }
    } 
    return false;
}

void analyzeHand(int hand[]) {  // prioritize the best hand 
    if (containsFourOfaKind(hand)) {
        cout << "Four of a Kind!" << endl;
    } else if (containsFullHouse(hand)) {
        cout << "Full House!" << endl;
    } else if (containsStraight(hand)) {
        cout << "Straight!" << endl;
    } else if (containsThreeOfaKind(hand)) {
        cout << "Three of a Kind!" << endl;
    } else if (containsTwoPairs(hand)){
        cout << "Two Pair!" << endl;
    } else if (containsPair(hand)){
        cout << "Pair!" << endl;
    } else {
        cout << "Hgh Card!" << endl;
    }
}

int main() {
    int hand[HAND_SIZE];
    getHand(hand);
    analyzeHand(hand);
    return 0;
}

// end - yay