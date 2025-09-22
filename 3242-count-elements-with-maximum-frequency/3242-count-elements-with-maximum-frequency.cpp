class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        // frequency array create kro
        vector<int>freq(256,0);
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        // max frequency count kro
        int maxFreq = 1;
        for(int i = 0; i<256; i++){
            maxFreq = max(maxFreq, freq[i]);
        }

        int ans = 0; 
        for(int i = 0; i<256; i++){
            if(freq[i]>=maxFreq){
                ans = ans+ freq[i];
            }
        }
        return ans;

    }
};