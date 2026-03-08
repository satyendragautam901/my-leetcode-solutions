class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        for(int i = 0; i<nums.size(); i++){
            char ch = nums[i][i];
            if(nums[i][i] == '1')
                ans = ans + '0';
            else 
                ans = ans + '1';
        }

        return ans;
    }
};