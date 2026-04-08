class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int M = 1e9 + 7;
        for(auto query : queries){
            int l = query[0];
            int r = query[1];
            int k = query[2];
            int v = query[3];

            while(l<=r){
                nums[l] = (1LL * nums[l] * v) % M;
                l+=k;
            }

        }

        int res = 0; 
        for(int &num: nums){
            res ^= num;
        }

        return res;
    }
};