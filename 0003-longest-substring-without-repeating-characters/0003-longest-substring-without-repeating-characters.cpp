class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(); // size of string
        if(n==0){
            return 0;
        }
        int temp = 1;

        for(int i = 0; i<n-1; i++){
        vector<bool>occur(256,false);
        occur[s[i]] = true;

        string ans = "";
        ans+=s[i];
        for(int j =i+1; j<n; j++){
            if(occur[s[j]]==true){
                break;
            }
            else{
                ans+=s[j];
                occur[s[j]]=true;
                
            }
        }
        temp = max(temp, int(ans.length()));
            
        }

        return temp;
    }
};