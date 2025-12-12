#include <bits/stdc++.h>

using namespace std;

// *************
// ****** ******
// *****   *****
// ****     ****
// ***       ***
// **         **
// *           *
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

    for (int i = 0; i < n; i++) {
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