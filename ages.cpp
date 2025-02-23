// Assignment1 Ages
// Claire Chen, CS110B

#include <iostream>
using namespace std;

int main(){
  int age;
  
  cout <<"Please input your age: ";
  cin >> age;

  if (age<0) {
    cout << "Error! Age must be at least 0!" << endl;
} else if (age <= 12) {
    cout << "You are a child." << endl;
} else if (age >= 13 && age <= 17) {
    cout << "You are a teen." << endl;
} else if (age >= 18 && age <= 64) {
    cout << "You are an adult." << endl;
} else {
    cout << "You are a retiree." << endl;
}
  return 0;
}


/* Sample
[cchen584@hills ~]$ ./a.out
Please input your age: 0
You are a child.
[cchen584@hills ~]$ ./a.out
Please input your age: -1
Error! Age must be at least 0!
[cchen584@hills ~]$ ./a.out
Please input your age: 23
You are an adult.
[cchen584@hills ~]$ ./a.out
Please input your age: 45
You are an adult.
[cchen584@hills ~]$ ./a.out
Please input your age: 90
You are a retiree. 
*/
