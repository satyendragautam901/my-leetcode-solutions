class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size() - 1; i++) {
            int remain = target - nums[i]; // use a separate variable
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == remain) {
                    return {i, j};
                }
            }
        }

        return { };
    }
};