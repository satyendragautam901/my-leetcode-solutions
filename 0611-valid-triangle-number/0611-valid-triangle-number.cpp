class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n<3){// no valid triangle
            return 0; 
        }

        // step1: sort the array
        sort(nums.begin(), nums.end());

        int ans = 0;

        // fix the largest side nums[k]
        for (int k = n - 1; k >= 2; k--) {
            int i = 0, j = k - 1;
            while (i < j) {
                if (nums[i] + nums[j] > nums[k]) {
                    ans += (j - i); // all pairs between i..j-1 will work
                    j--;
                } else {
                    i++;
                }
            }
        }

        return ans;
    }
};