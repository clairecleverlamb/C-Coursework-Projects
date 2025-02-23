#include <iostream>
#include <string>

using namespace std;

int main() {

    string names[] = {"Carnitas", "Pollo", "Veggie"};
    float prices[] = {6.95, 6.25, 5.95};

    string *namePtr = &names[0]; 
    float *pricePtr = &prices[0];

    for (int i = 0; i < 3; i++) {
        *(namePtr + i ) += ' Espeical';
        *(pricePtr + i) += 10.00;
    }

    cout << "Update Menu: \n";
    for (int i = 0; i < 3; i++){
        cout << *(namePtr + i) << " - $" << *(pricePtr + i) << endl;
    }
    return 0;
}
// a little confusing here 