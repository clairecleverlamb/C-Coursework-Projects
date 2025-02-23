#include <iostream>
#include <iomanip>
using namespace std;

float toCelsius(float fahrenheit){
    return 5.0/9.0 * (fahrenheit - 32);
}

int main() {
    cout << "Welcome to the temperature table" << endl;
    cout << "F           C" << endl; 

    for (int fahrenheit = 60; fahrenheit <= 80; fahrenheit++) {
        float celsius = toCelsius(fahrenheit);
        cout.setf(ios::fixed, ios::floatfield);
        cout << fahrenheit << "          " << setprecision(1) << celsius << endl;
    }
    return 0;
}