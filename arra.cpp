#include <iostream>
using namespace std;

int main() {
    string Vehicle[4] = {"Benz", "Lexus", "Volvo", "Ford"};
    cout << Vehicle[0] << endl;
    cout << Vehicle[1] << endl;

    // change the key of zero to something else
    Vehicle[0] = "Country Man"; 

    return 0;
}