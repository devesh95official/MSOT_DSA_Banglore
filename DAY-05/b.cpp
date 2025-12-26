#include <bits/stdc++.h>

using namespace std;

// overflow

int main() {
    // int a = INT_MAX;  // 32 bit integer
    // long long b = INT_MAX; // 64 bit integer

    // cout << a << endl;
    // cout << b << endl;

    // a++;
    // b = LLONG_MAX;

    // cout << a << endl;
    // cout << b << endl;

    int l = 1, r = INT_MAX;

    int mid1 = (l + r) / 2; // (1 + INT_MAX)/2
    int mid2 = l + (r - l) / 2; // 1 + (INT_MAX -1)/2
    
    cout << mid1 << endl;
    cout << mid2 << endl;

    return 0;
}