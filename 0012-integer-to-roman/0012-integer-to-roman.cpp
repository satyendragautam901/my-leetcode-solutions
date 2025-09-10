class Solution {
public:
    string intToRoman(int num) {
        // first create two vector that holds number and roman value respectively
        vector<int>n{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> ch{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string ans = "";

        if(num == 0){
            return ans;
        }
        
        for(int i = 0; i<13; i++){
            while(num >= n[i]) { // jab tak n[i] ki value subtract ho ske
                num -= n[i];
                ans += ch[i];
            }
        }
        
        return ans;
    }
};