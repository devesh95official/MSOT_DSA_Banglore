// https://leetcode.com/problems/peak-index-in-a-mountain-array/description

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        // l = 1 because at l = 0 peak is not possible
        int l = 1;
        // r = n - 2 because at r = n - 1 peak is not possible
        int r = n - 2;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                return mid;
            }

            if (arr[mid - 1] < arr[mid])l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
};

int main() {

    return 0;
}