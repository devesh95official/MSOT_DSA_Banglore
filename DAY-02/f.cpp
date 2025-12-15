// armstrong number

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    int N = n;
    int s = 0;
    while (n > 0)s++, n /= 10;

    n = N;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + pow(digit, s);
        n /= 10;
    }
    if (N == sum)cout << "Armstrong Number\n";
    else cout << "Not Armstrong\n";

    return 0;
}
