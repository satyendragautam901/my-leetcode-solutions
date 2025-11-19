class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] == original){
                original = 2*original;

            }
            for(int j = 0; j<n; j++){
                if(nums[j]== original){
                    original = 2*original;
                
                }
            }
        }

        return original;
    }
};