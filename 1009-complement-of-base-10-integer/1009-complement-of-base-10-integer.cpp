class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        vector<int> temp;

        while(n != 1){
            temp.push_back(n % 2);
            n = n / 2;
        }

        temp.push_back(1);

        // flip bits
        for(int i = 0; i < temp.size(); i++){
            temp[i] = 1 - temp[i];
        }

        // binary → decimal
        int ans = 0;
        int power = 1;

        for(int i = 0; i < temp.size(); i++){
            ans += temp[i] * power;
            power *= 2;
        }

        return ans;
    }
};