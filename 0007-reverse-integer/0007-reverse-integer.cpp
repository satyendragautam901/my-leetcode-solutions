class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        int start = (str[0] == '-') ? 1 : 0; // if the first '-' then skip this 
        int end = str.size()-1;
        while(start < end){
            swap(str[start++], str[end--]);
        }

        long ans = stol(str); 
        if (ans > INT_MAX || ans < INT_MIN) return 0; 

        return (int)ans;

    }
};