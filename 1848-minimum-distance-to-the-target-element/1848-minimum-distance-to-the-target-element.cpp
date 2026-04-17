class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == target){
                ans = min(ans, abs(i-start));
            }
        }

        return (ans == INT_MAX) ? -1 : ans;// if ans is large then it would be -1;
    }
};