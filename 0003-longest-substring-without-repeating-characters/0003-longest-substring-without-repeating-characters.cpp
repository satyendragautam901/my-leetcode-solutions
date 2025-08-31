class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(); // size of string

        if (n == 0) {// if size is 0 then return
            return 0;
        }
        vector<int>lastIndex(256,-1); // holds last index of each char
        int maxLength = 0; // holds max length 
        int left = 0; // window left end is here

        for(int i = 0; i<n; i++){
            // agar char pehle aa chuka hai
            if(lastIndex[s[i]] >=left){
                left = lastIndex[s[i]] + 1; // left window starts from next onwards

            }
            
            lastIndex[s[i]] = i; // push the index that is visited
            maxLength = max(maxLength, i - left + 1 );
        }

        return maxLength;
    }
};