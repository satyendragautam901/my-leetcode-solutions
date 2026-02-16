class Solution {
public:
    int reverseBits(int n) {
        if(n==0)
            return 0;
        int ans = 0;
        for(int i = 0; i<32; i++){
            ans <<=1; // first find place in ans

            // to find msb -> n&1

            ans = ans | n&1;
            n>>=1; // ans ko right shit kro
        }
        return ans;
    }
};