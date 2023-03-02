#include <iostream>
using namespace std;

int main() {
    // string food = "Rice";   // Variable declaration
    // string* ptr = &food;    // Pointer declaration

    // // Reference: Output the memory address of food with the pointer
    // cout << ptr << '\n';

    // //  Dereference: Output the value of food with the pointer
    // cout << *ptr << '\n';


    // POINTERS MODIFICATION
    string food = "Pizza";
    string *ptr = &food;

    // output the value of food (Pizza)
    cout << food << "\n";

    // output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";
    
    // output the new value of the food variable (Hamburger)
    cout << food << '\n';

    return 0;
    
    return 0;
}