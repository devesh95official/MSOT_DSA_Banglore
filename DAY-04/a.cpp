// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = num.size();

        int actualSum = n * (n + 1) / 2;
        int currentSum = 0;

        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
        }

        int missingNumber = actualSum - currentSum;
        return missingNumber;
    }
};