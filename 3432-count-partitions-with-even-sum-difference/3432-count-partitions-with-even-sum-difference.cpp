class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        int int_sum = 0;
        for(int i = 0; i<n-1; i++){
            int_sum+=nums[i];
            int temp_sum = 0;
            for(int j = i+1;j<n; j++){
                temp_sum +=nums[j];
            }
            if((int_sum - temp_sum)%2 == 0)
                cnt++;
        }

        return cnt;
    }   
};