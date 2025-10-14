class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        // We need at least 2k elements for two adjacent subarrays
        if (n < 2 * k) {
            return false;
        }
        
        // Check all possible starting positions for the first subarray
        for (int i = 0; i <= n - 2 * k; i++) {
            bool firstValid = true;
            bool secondValid = true;
            
            // Check if first subarray [i, i+k-1] is strictly increasing
            for (int j = i + 1; j < i + k; j++) {
                if (nums[j] <= nums[j - 1]) {
                    firstValid = false;
                    break;
                }
            }
            
            // Check if second subarray [i+k, i+2k-1] is strictly increasing
            for (int j = i + k + 1; j < i + 2 * k; j++) {
                if (nums[j] <= nums[j - 1]) {
                    secondValid = false;
                    break;
                }
            }
            
            // If both subarrays are strictly increasing
            if (firstValid && secondValid) {
                return true;
            }
        }
        
        return false;
    }
};