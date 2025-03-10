#include <iostream>
#include <string>

using namespace std;
const int NUM_TYPES = 4;

struct SalesRecord
{
    string burritoType;
    int numSold;
};

void inputRecords(SalesRecord *records, int numTypes)
{
    for (int i = 0; i < numTypes; i++)
    {
        cout << "Enter burrito type: ";
        cin >> records[i].burritoType;
        cout << "Enter number sold: ";
        cin >> records[i].numSold;
    }
}

void printReport(SalesRecord* records, int numTypes) {
    cout << "\n--- Daily Sales Report ---\n";
    int totalSold = 0;

    for (int i = 0; i < numTypes; i++) {
        cout << records[i].burritoType << " - Sold: " << records[i].numSold << endl;
        totalSold += records[i].numSold;
    }

    cout << "--------------------------\n";
    cout << "Total burritos sold: " << totalSold << endl;
}

int main() {
    int numTypes;
    cout << "Enter the number of different burrito types sold today: ";
    cin >> numTypes;

    SalesRecord* records = new SalesRecord[numTypes];
    inputRecords(records, numTypes);
    printReport(records, numTypes);

    return 0;
}