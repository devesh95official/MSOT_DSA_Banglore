#include <iostream>

using namespace std;

// *************
// ****** ******
// *****   *****
// ****     ****
// ***       ***
// **         **
// *   Akash   *
// **         **
// ***       ***
// ****     ****
// *****   *****
// ****** ******
// *************


int main() {

    // input
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (i == 0 && j == 0)continue;
            cout << "*";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // number of spaces = total char in a line(2*n-1) - used chars(Akash and 2 stars == 7)
    int numberOfSpaces = (2 * n - 1) - 7;

    cout << "*";
    for (int i = 0; i < numberOfSpaces / 2; i++) {
        cout << " ";
    }
    cout << "Akash";
    for (int i = 0; i < numberOfSpaces / 2; i++) {
        cout << " ";
    }

    cout << "*\n";


    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (i == n - 1 && j == 0)continue;
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i) - 3; j++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}