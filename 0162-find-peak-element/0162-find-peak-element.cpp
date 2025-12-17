class Solution {
public:
    int findPeakElement(vector<int>& nums) { // brute force: O(n) time 
        int n = nums.size(); 
        int peak = 0;
        for(int i = 1; i<n; i++){
            if(nums[i] > nums[i-1]){
                peak = i;
            }
        }

        return peak;
    }
};