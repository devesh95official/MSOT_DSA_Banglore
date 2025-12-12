// #include <iostream>

// using namespace std;

// // A
// // AB
// // ABC
// // ABCD
// // ABCDE
// // ABCDEF
// // ABCDEFG
// // ABCDEFGH
// // ABCDEFGHI
// // ABCDEFGHIJ
// // ABCDEFGHIJK


// int main() {

//     // input
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         char c = 'A';
//         for (int j = 0; j < i + 1; j++) {
//             cout << c;
//             c++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// A
// BC
// DEF
// GHIJ
// KLMNO
// PQRSTU
// VWXYZAB
// CDEFGHIJ



// int main() {

//     // input
//     int n;
//     cin >> n;

//     char c = 'A';
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << c;
//             if (c == 'Z')c = 'A';
//             else c++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;


// ABCDEFGH
//  IJKLMNO
//   PQRSTU
//    VWXYZ
//     ABCD
//      EFG
//       HI
//        J


int main() {

    // input
    int n;
    cin >> n;

    char c = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << c;
            if (c == 'Z')c = 'A';
            else c++;
        }
        cout << endl;
    }

    return 0;
}