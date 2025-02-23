#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 20;

// linear search 
bool linearSearch(int list[], int size, int value){
    int pos = 0;
    bool isFound = false;
    while (!isFound && pos < size){
        if (list[pos] == value)
            isFound = true;
        pos++;
    }
    return isFound;
}
// binary search
bool binarySearch(const int list[], int size, int value){
    int first = 0, last = size - 1, middle; 
    bool isFound = false; 
    while (!isFound && first <= last){
        middle = (first+last) / 2;
        if (list[middle] == value)
           isFound = true;
        else if (list[middle] > value)
           last = middle - 1;
        else 
           first = middle + 1; 
    }
    return isFound; 
}
// bubble sort 
void swapper(int& x, int& y) {
    int temp = x; 
    x = y ; 
    y = temp;
}
void sortArray(int array[], int size){
    bool swapped;
    do {
        swapped = false; 
        for (int i = 0; i < (size -1); i++) {
            if(array[i] > array[i + 1]){
                swapper(array[i], array[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

//selection sort
void selectionSort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if (array[j]< array[minIndex]){
                minIndex = j; 
            }
        } swapper(array[i], array[minIndex]);
    }
}

// testing 
int main(){
    int stolenCards[SIZE];
    ifstream inputFile("cards.txt");
    if (!inputFile){
        cerr << "Error opening file! " << endl;
        return 1;
    }
    for (int i = 0; i < SIZE; i++){
        inputFile >> stolenCards[i];
    }
    inputFile.close();

    int userCard;
    cout << "Enter your 6-digit credit card number: ";
    cin >> userCard;

    if (linearSearch(stolenCards, SIZE, userCard)){
        cout << "Fraud detected! Your card is stolen." << endl;
    } else {
        cout << "Your card is safe to use!" << endl;
    }
    return 0;
}
