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

    // linear search
    int found = -1, target = 3;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i;
        }
    }
    // if found is not -1 then element is present in our array!
    if (found != -1)cout << "Found at : " << found << "\n";
    else cout << "Not Found!\n";

    // minimum element
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        //mini = min(mini, arr[i]);
        if (arr[i] < mini)mini = arr[i];
    }
    cout << "Minimum element : " << mini << endl;

    // maximum element
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        //maxi = max(maxi, arr[i]);
        if (arr[i] > maxi)maxi = arr[i];
    }
    cout << "Maximum element : " << maxi << endl;

    return 0;
}