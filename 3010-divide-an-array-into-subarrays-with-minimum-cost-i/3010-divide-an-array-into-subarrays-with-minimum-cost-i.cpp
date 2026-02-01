class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i<1; i++){
            for(int j = i+1; j<n; j++){
                for(int k =j+1; k<n; k++){
                    int temp = nums[i] + nums[j] + nums[k];
                    ans = min(ans, temp);
                }
            }
        }
        return ans;
    }
};