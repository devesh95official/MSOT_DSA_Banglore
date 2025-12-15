// is prime

#include <iostream>

using namespace std;

void is_Prime(int n) {
    if (n == 2)cout << "Prime!";
    else if (n < 2 || n % 2 == 0)cout << "Not Prime!";
    else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                cout << "Not Prime!";
                return;
            }
        }
        cout << "Prime\n";
    }
}

int main() {

    int n;
    cin >> n;

    is_Prime(n);

    return 0;
}