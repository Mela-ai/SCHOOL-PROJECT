/* A multi-dimensional array of arrays */
#include <iostream>
using namespace std;

// int main() {
//     string Alphabet[2][4] = {
//         {"A", "B", "C", "D"},
//         {"E", "F", "G", "H"}
//     };
//     // cout << Alphabet[1][3] << "\n";

//     /* Three-dimensional array in cpp */
//     string friends[2][2][2] = {
//         {
//             {"Emmanuel", "Micheal"},
//             {"Steven", "Peter"},
//         },

//         {
//             {"WILLSON", "IYKE"},
//             {"EMEKA", "ISACC"},
//         }
//     };

//     cout << friends[1][1][0];
// }

int main() {
    string friends[6][2][2] = {
        {
            {"Tony", "Jarvis"},
            {"Marvin", "Vox"},
        },

        {
            {"Bobby", "Robin"},
            {"Monica", "Samuel"},
        },

        {
            {"Mercy", "Martha"},
            {"Mary", "Pepper"},
        },

        {
            {"Jonathan", "David"},
            {"Michelle", "Sylvia"},
        }
    };

    // cout << friends[5][1][1] << "\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
                cout << friends[i][j] << endl;
            }
        }

    return 0;
}