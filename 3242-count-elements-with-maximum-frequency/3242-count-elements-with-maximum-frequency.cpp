class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if (nums.empty()) return 0;// edge case
        
        // frequency array
        vector<int> freq(101, 0); // nums[i] <= 100 hai constraints me
        for (int n : nums) {
            freq[n]++;
        }

        // find max frequency
        int maxFreq = 0;
        for (int f : freq) {
            maxFreq = max(maxFreq, f);
        }

        // count total elements with maxFreq
        int ans = 0;
        for (int f : freq) {
            if (f == maxFreq) ans += f;
        }
        
        return ans;

    }
};