class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        int ans = 0;
        int power = 1;

        while(n){
            int rem = n % 2;
            ans = ans + !rem * power;
            power = power * 2;
            n >>= 1;
        }
        return ans;
    }
};