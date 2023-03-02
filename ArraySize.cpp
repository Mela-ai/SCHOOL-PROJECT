#include <iostream>
using namespace std;

int main() {
    int OurNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(OurNumbers) << endl;
    cout << sizeof(OurNumbers) / sizeof(int) << endl;

    int values[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        cout << values[i] << "\n";
    }

    return 0;
}