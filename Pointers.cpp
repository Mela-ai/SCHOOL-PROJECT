#include <iostream>
using namespace std;

int main() {
    // A Pointer is a variable that stores the memory address as its variable
    string Name = "Mela Bamiji";
    string* pointer = &Name;

    cout << Name << '\n';
    cout << &Name << '\n';
    cout << pointer << '\n';

    return 0;
}