#include <iostream>
void printSome(const int array[], int size) {
    for (int i = 0; i < size; i++){
        if (array[i] > 5){
            std:: cout << array[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {3,2,6,5,4,9};
    int size = 6; 

    printSome(numbers, size);
    return 0; 
}