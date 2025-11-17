class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                // Check next k positions, but don't go beyond array
                for (int j = i + 1; j <= min(i + k, n - 1); j++) {
                    if (nums[j] == 1) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};