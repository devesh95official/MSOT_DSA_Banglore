// Ganesha Pattern


// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *

#include <iostream>

using namespace std;



int main() {

    //input
    int n;
    cin >> n;

    int m = n / 2;

    // part 1
    cout << "*";
    for (int i = 0; i < m - 1; i++)cout << " ";
    for (int i = 0; i < m + 1; i++)cout << "*";
    cout << endl;

    // part 2
    for (int i = 0; i < m - 1; i++) {
        cout << "*";
        for (int j = 0; j < m - 1; j++)cout << " ";
        cout << "*\n";
    }

    // part 3
    for (int i = 0; i < n; i++)cout << "*";
    cout << endl;

    // part 4
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m; j++)cout << " ";
        cout << "*";
        for (int j = 0; j < m - 1; j++)cout << " ";
        cout << "*\n";
    }

    // part 5
    for (int i = 0; i < m + 1; i++)cout << "*";
    for (int i = 0; i < m - 1; i++)cout << " ";
    cout << "*";

    return 0;
}