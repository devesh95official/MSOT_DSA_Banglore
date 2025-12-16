// 2nd largest element in the array
#include <iostream>
#include <climits>

using namespace std;



int main() {
    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    // maximum element
    int maxi = INT_MIN, idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi)maxi = arr[i], idx = i;
    }
    arr[idx] = INT_MIN;


    maxi = INT_MIN, idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi)maxi = arr[i], idx = i;
    }

    cout << "Second Max ele  : " << maxi << "\nFound at idx : " << idx << endl;
    return 0;
}