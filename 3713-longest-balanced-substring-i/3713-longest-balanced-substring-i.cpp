class Solution {
public:

    bool CheckFreq(vector<int>freq){
        int temp  = 0;
        for(int i = 0; i<26; i++){
            if(freq[i] == 0) continue;

            if(temp == 0){
                temp = freq[i];
            }
            else if(freq[i] != temp){
                return false;
            }
        }

        return true;
    }
    int longestBalanced(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 0; i<n; i++){
            vector<int>freq(26,0); // keep track of frequency

            for(int j = i; j<n; j++){
                freq[s[j] - 'a']++; // update frequency
                
                // check all the frequency have same 
                if(CheckFreq(freq)){
                    ans = max(ans, j-i+1);
                }
            }
        }

        return ans;
    }
};