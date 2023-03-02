#include <iostream>
using namespace std;

// int main() {
//     int x;
//     cout << "Type a number";
//     cin >> x;
//     cout << x;
// }

int main() {
    int year;
    int age;
    cout << "What is your Birth year";
    cin >> year;
    age = 2023 - year;
    cout << age;

    return 0;
}