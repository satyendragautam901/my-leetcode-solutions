class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int, int>mp;
        
        for (int i = 0; i < n; i++) {
            int remain = target - nums[i]; // use a separate variable

            if(mp.count(remain)){// find the remain value is available or not
                return {i, mp[remain]};
            }
            mp[nums[i]] = i; // push into map 
            
        }

        return { };
    }
};