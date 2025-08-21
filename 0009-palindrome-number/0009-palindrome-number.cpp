class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        // if(str.size() == 1){
        //     return false;
        // }
        string dup = "";

        int start = 0;
        int end = str.size()-1;
        for(int i = end; i>=0; i--){
            dup+=str[i];
        }

        return str==dup;
    }
};