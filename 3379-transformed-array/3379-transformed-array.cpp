class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                ans[i] = 0;
            }
            else if(nums[i] > 0){
                int idx = ((i + nums[i]) % n + n) % n; // right side move
                ans[i] = nums[idx];
            }
            else{
                int idx = ((i + nums[i]) % n + n) % n; // left side move
                
                ans[i] = nums[idx];
            }
        }
        return ans;
    }
};