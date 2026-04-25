class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char ans='0';
        for(int i = 0; i<max(s.size(), t.size()); i++){
            if(s[i] != t[i])
                return t[i];
            
                
        }
        return ans;
    }
};