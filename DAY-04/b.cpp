// https://leetcode.com/problems/find-pivot-index/description/
// O(n*n)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int left = 0, right = 0;
            // left sum
            // elements left to i
            for (int j = 0; j < i; j++) {
                left += nums[j];
            }
            //right elements
            for (int j = i + 1; j < n; j++) {
                right += nums[j];
            }
            if (left == right)return i;
        }
        return -1;
    }
};