#include <iostream>
using namespace std;

int main() {
    string name;
    string Greet = "Hello";
    cout << "What is your name?";
    cin >> name;
    cout << Greet + " " + name;
}