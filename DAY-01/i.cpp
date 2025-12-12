// #include <iostream>

// using namespace std;


//         1
//        12
//       123
//      1234
//     12345
//    123456
//   1234567
//  12345678


// int main() {

//     // input
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++) {
//             cout << j + 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;


// 1
// 01
// 101
// 0101
// 10101
// 010101


int main() {

    // input
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if ((i + j) % 2 == 0)cout << "1";
            else cout << "0";
        }
        cout << endl;
    }

    return 0;
}