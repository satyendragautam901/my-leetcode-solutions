class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;

        int n = s.size();

        for(int i = 0; i < n; i++){
            // rotate by 1 (right rotation)
            char last = s[n-1];
            for(int j = n-1; j > 0; j--){
                s[j] = s[j-1];
            }
            s[0] = last;

            if(s == goal) return true;
        }

        return false;
    }
};