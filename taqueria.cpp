#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// find the total and biggest sale
int main(){
    const int NUM_TYPES = 4;
    string burritoType[NUM_TYPES] = {"carnitas","beef", "shrimp","veggie"};
    int numSold[NUM_TYPES];
    int totalSold = 0, maxSold = 0, maxIndex = 0;

    for (int i = 0; i < NUM_TYPES; i++){
        cout << "Enter number of " << burritoType[i] << " sold: ";
        cin >> numSold[i];
        totalSold += numSold[i];

        if (numSold[i] > maxSold) {
            maxSold = numSold[i];
            maxIndex = i; 
        }
    }
    cout << "You sold " << totalSold << " burritos today. The most sold was " << burritoType[maxIndex] << "." << endl;
    return 0;
}