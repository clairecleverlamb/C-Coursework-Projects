#include <iostream>
#include <cstring>  

using namespace std;

struct WinRecord {
    char* name; 
    int wins;
};

void getLine(char*& str) {
    char buffer[100]; 

    cin.getline(buffer, 100); 
    str = new char[strlen(buffer) + 1]; 
    strcpy(str, buffer); 
}

void initializeData(WinRecord* standings, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter team #" << (i + 1) << " name: ";
        getLine(standings[i].name); 
        cout << "Enter the wins for team #" << (i + 1) << ": ";
        cin >> standings[i].wins;
        cin.ignore();
    }
}

// helper functions 
void swapper(int& x, int& y) {
    int temp = x; 
    x = y; 
    y = temp;
}

void swapper(char*& x, char*& y) {
    char* temp = x; 
    x = y; 
    y = temp;
}


void sortData(WinRecord* standings, int size) {
    bool swapped;
    do {
        swapped = false; 
        for (int i = 0; i < size - 1; i++) {
            if (standings[i].wins < standings[i + 1].wins) {
                swapper(standings[i].wins, standings[i + 1].wins);
                swapper(standings[i].name, standings[i + 1].name);
                swapped = true;
            }
        }
    } while (swapped);
}



void displayData(WinRecord* standings, int size) {
    cout << "\n--- League Standings ---\n";
    for (int i = 0; i < size; i++) {
        cout << standings[i].name << ": " << standings[i].wins << " wins\n";
    }
}

int main() {
    int numTeams;

    cout << "How many teams will you enter?: ";
    cin >> numTeams;
    cin.ignore();
    WinRecord* standings = new WinRecord[numTeams];

    initializeData(standings, numTeams);
    sortData(standings, numTeams);
    displayData(standings, numTeams);

    for (int i = 0; i < numTeams; i++) {
        delete[] standings[i].name;  
    delete[] standings; // for freeing memories

    return 0;
    }
}



/* Sample results:
[cchen584@hills ~]$ ./a.out               
How many teams will you enter?: 4
Enter team #1 name: Padres 
Enter the wins for team #1: 75
Enter team #2 name: Dodgers
Enter the wins for team #2: 91
Enter team #3 name: Giants
Enter the wins for team #3: 92
Enter team #4 name: Cubs
Enter the wins for team #4: 65

--- League Standings ---
Giants: 92 wins
Dodgers: 91 wins
Padres: 75 wins
Cubs: 65 wins
*/

