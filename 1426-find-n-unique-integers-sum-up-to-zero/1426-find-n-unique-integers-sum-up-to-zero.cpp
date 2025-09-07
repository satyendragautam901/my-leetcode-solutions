class Solution {
public:
    vector<int> sumZero(int n) {
        int num = n/2;
        vector<int>ans; // holds ans

        for(int i = 0; i<num; i++){
            ans.push_back(-(i+1));
            ans.push_back(i+1);
        }
        if(n%2 == 1){
            ans.push_back(0);
        }

        return ans;
    }
};