#include <iostream>
using namespace std;

// formats in creating a variable in C++

// type variableName = value;


// int main() {
//     int myNum = 500;
//     myNum = 200;
//     cout << "I am" << myNum << "years old.";
//     return 0;
// }

/* int main() {
    int X = 30;
    int Y = 40;
    int sum = X + Y;
    cout << sum;
    return 0;
}
 */

//  Declaring multiple variables with one type 

/* int main() {
    int X = 5, Y = 10, Z = 15;
    cout << X + Y + Z;
    return 0;
} */

// one value to multiple variables
// int main() {
//     int X, Y, Z;
//     X = Y = Z = 300;
//     cout << X + Y + Z;
// }

// C++ identifiers
// int main() {
//     int minutes_Per_Hour = 60;

// }

// Rules in Variables naming
// Names can contain letters, digits, and underscore 
// Names must begin with a letter, or an underscore (_)
// Names are case sensitive (myVar and myvar are different variables)
// Names cannot contain whitespace or special characters like !, #, %, etc 
// Reserved keywords (like C++ keywords, such as int) cannot be used as names 

// Constants variables 
int main() {
    const float constant = 20.5; 
    // constant = 30.4;  yields an error 
    cout << constant;
    return 0;

}
