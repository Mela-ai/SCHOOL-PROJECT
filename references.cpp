// A reference variable is a "reference" to an existing variable, and it is created with the "&" operator

#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << meal <<  '\n';

    // Memory Address of a variable
    cout << &food << '\n';

    return 0;
}