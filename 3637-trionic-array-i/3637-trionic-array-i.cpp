class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        int i = 0;
        // first check increasing part
        while(i < n-1 && nums[i] < nums[i+1]){
            i++;
        }
        if(i == 0 || i==n-1)
            return false;
        // check decreasing part
        while(i < n-1 && nums[i] > nums[i+1]){
            i++;
        }
        if(i == 0 || i==n-1)
            return false;

        // first check increasing part
        while(i < n-1 && nums[i] < nums[i+1]){
            i++;
        }

        return i == n-1;
        
    }
};