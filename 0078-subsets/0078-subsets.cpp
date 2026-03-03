class Solution {
public:
    void solve(int index, vector<int>& nums, 
               vector<int>& current, 
               vector<vector<int>>& ans) {
        
        ans.push_back(current);   // store current subset
        
        for(int i = index; i < nums.size(); i++) {
            current.push_back(nums[i]);   // include
            solve(i + 1, nums, current, ans);
            current.pop_back();           // backtrack
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        solve(0, nums, current, ans);
        return ans;
    }
};