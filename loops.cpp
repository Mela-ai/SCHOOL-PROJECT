// A loop executes a block of code as far as a conditions is True

// While loops
// Do-While loops
// for loop 

#include <iostream>
using namespace std;

/* while loop */
// int main() {
//     int i = 0;
//     while (i < 5) {
//         cout << i << "\n";
//         i++;
//     }
// }

/* do-while loop */
// int main() {
//     int i = 0;
//     do {
//         cout << i << "\n";
//         i++;
//     } while(i < 5);

//     return 0;
// }

/* for loop */
// for (statement 1; statement 2; statement 3) {
//      // code block to be executed
// }

// int main() {
//     string i;
//     for (int i = 0; i < 5; i++) {
//         cout << "Mela" << "\n";
//     }
//     return 0;
// }

// int main() {
//     for (int i = 1; i <= 2; ++i) {
//         cout << "Outer: " << i << "\n"; // executes 2 times

//         // inner loop
//         for (int j = 1; j <= 3; ++j) {
//             cout << " Inner: " << j << "\n"; // executes 6 times (2 * 3)
//         }
//     }
// }

/* for-each loop */
// int main() {
//     int OurNumber[5] = {10, 20, 30, 40, 50};

//     for (int i : OurNumber) {
//         cout << i <<  "\n";
//     }
// }

// /* using break statement to stop the loop at a given point in time */
// int main() {
//     for (int i = 0; i < 10; i++) {
//         if (i == 4) {
//             break;
//         }
//         cout << i << "\n";
//     }
// }

/* using continue statement to break one iteration in the loop */
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
}