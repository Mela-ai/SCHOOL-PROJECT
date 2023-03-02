#include <iostream>
using namespace std;

// int main() {
//     string Vehicles[5] = {"Volvo", "BMW", "Country Man", "Ford", "Benz"};
    
//     // print all variables in a loop 
//     for (int i = 0; i < 5; i++) {
//         cout << Vehicles[i] << "\n";
//     }

//     return 0;
// }

int main() {
    int numbers[5] = {10, 3, 100, 7, 5};

    // print all variables in a 'for-each' loop
    for (int i: numbers) {
        cout << i << "\n";
    }
    

    return 0;
}