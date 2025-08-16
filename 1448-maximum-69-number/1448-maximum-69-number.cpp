class Solution {
public:
    int maximum69Number (int num) {
        int ans = num;
        string original = to_string(num);

        for(int i = 0; i<original.size(); i++){
            if(original[i] == '6'){
                original[i] = '9';
                int temp = stoi(original);
                ans = max(ans, temp);
                original[i] = '6';
            }
        }
        return ans;
    }
};