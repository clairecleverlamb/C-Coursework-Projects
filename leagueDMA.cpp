#include <iostream>
#include <fstream>

using namespace std;

void initializeArrays(string* names,int* wins, int size){
    for (int i = 0; i < size; i++){
        cout << "Enter team #" << (i + 1) << ": ";
        cin >> names[i];
        cout << "Enter the wins for team # " << (i+1) << ": ";
        cin >> wins[i];
    }
}

void swapper(int& x, int& y) {
    int temp = x; 
    x = y ; 
    y = temp;
}

void swapper(string& x, string& y) {
    string temp = x; 
    x = y ; 
    y = temp;
}

void sortData(string* names, int* wins, int size){
    bool swapped;;
    do {
        swapped = false; 
        for (int i = 0; i < size - 1; i++){
            if (wins[i] < wins[i+1]){
                swapper(wins[i],wins[i+1]);
                swapper(names[i], names[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

//display
void displayData(string* names, int* wins, int size){
    cout << "\nLeague Standings:" << endl;
    for (int i = 0; i < size; i++){
        cout << names[i] << ": " << wins[i] << endl;
    }
}

int main(){
    int numTeams;

    cout << "How many teams will you enter?: ";
    cin >> numTeams;

    string* teams = new string[numTeams];
    int* wins = new int[numTeams];

    initializeArrays(teams, wins, numTeams);
    sortData(teams, wins, numTeams);
    displayData(teams, wins, numTeams);

    delete[] teams;
    delete[] wins;

    return 0;
}


/* Sample Output: 
[cchen584@hills ~]$ ./a.out
How many teams will you enter?: 4
Enter team #1: Padres
Enter the wins for team # 1: 75
Enter team #2: Dodgers
Enter the wins for team # 2: 91 
Enter team #3: Giants
Enter the wins for team # 3: 92
Enter team #4: Cubs
Enter the wins for team # 4: 65

League Standings:
Giants: 92
Dodgers: 91
Padres: 75
Cubs: 65
*/