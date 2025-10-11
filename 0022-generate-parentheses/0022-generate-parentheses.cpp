class Solution {
public:
    void generatePara(vector<string>& st, string &temp, int open, int close, int n) {
        // Base case: when we've used all parentheses
        if (open == n && close == n) {
            st.push_back(temp);
            return;
        }
        
        // Add opening parenthesis if we haven't used all open ones
        if (open < n) {
            temp.push_back('(');
            generatePara(st, temp, open + 1, close, n);
            temp.pop_back(); // backtrack
        }
        
        // Add closing parenthesis if we have more open than close
        if (close < open) {
            temp.push_back(')');
            generatePara(st, temp, open, close + 1, n);
            temp.pop_back(); // backtrack
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        
        
        generatePara(ans, temp, 0, 0, n);
        return ans;
    }
};