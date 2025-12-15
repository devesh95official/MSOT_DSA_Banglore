// reverse the number

#include <iostream>

using namespace std;



int main() {

    int n;
    cin >> n;

    int temp = 0;

    while (n > 0) {
        temp += n % 10;
        n /= 10;
        //cout << "temp : " << temp << " n : " << n << endl;
        if (n > 0)temp *= 10;
    }

    cout << temp << endl;

    return 0;
}