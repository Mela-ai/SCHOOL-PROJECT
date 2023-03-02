// // C++ has the following conditional statements:
// // 'if' statement
// // 'else' statement
// // 'else if' statement
// // 'switch' statement 

#include <iostream>
using namespace std;

// // Create a program that checks a user age if the user is eligible for voting in Nigeria
// int main() {
//     int age;
//     cout << "\t WELCOME TO VOTING BOOTH" << endl;
//     cout << "Press Enter key to continue: " << endl;
//     // cout << " ...";
//     cout << "Enter your age";
//     cin >> age;

//     if (age < 18) {
//         cout << "You are not eligible to vote in Nigeria." << endl;
//     }
//     else if (age >= 18) {
//         cout << "Congratulations! You are eligible to vote in Nigeria" << endl;
//     }

//     return 0;
// }

// int main() {
//     int time = 20;
//     if (time < 20) {
//         cout << "Good day.";
//     } else {
//         cout << "Good evening";
//     }
// }

// Short-hand if-else (Tenary Operator)
// variable = (condition) ? expressionTrue : expressionFalse
// int main() {
//     int time = 20;
//     string result = (time < 18) ? "Good Day" : "Good evening"; 
//     cout << result << endl;

//     return 0;
// }

// using the 'switch' statement in CPP
int main() {
    int day = 5;

    switch(day > 20) {
        case 1:
            cout << "Monday";
        break;

        case 2:
            cout << "Tuesday";
        break;

        case 3:
            cout << "Wednesday";
        break;

        case 4:
            cout << "Thursday";
        break;

        case 5:
            cout << "Friday";   
        break; 

        default:
            cout << "I don't understand what your input is.";
    }
}