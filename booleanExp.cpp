// What is a Boolean
// A Boolean expression returns a boolean value that is either 1 (true) or 0 (false)
#include <iostream>
using namespace std;

int main() {
    int x = 50;
    int y = 30;

    cout << (x > y) << endl; // return 1 which is true, because 50 is greater than 30
    cout << (x == y) << endl;
    cout << (x >= y) << endl;
    cout << (x != y) << endl;
}