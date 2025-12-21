// https://leetcode.com/problems/find-pivot-index/description/
// O(n)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        // calc total sum
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        int left = 0;
        for (int i = 0; i < n; i++) {
            int right = totalSum - left - nums[i];
            if (left == right)return i;
            left += nums[i];
        }
        return -1;
    }
};