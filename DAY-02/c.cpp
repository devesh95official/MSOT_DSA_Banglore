// palindrome

#include <iostream>

using namespace std;



int main() {

    int n;
    cin >> n;

    int N = n;
    int temp = 0;

    while (n > 0) {
        temp += n % 10;
        n /= 10;
        if (n > 0)temp *= 10;
    }

    if (N == temp)cout << "YES\n";
    else cout << "NO\n";

    return 0;
}