class Solution {
public:
    int binaryGap(int n) {
        int curr = 0;
        int prev = -1;
        int ans = 0;

        while(n>0){
            if((n&1) > 0){ // means last bit 1 rha hoga
                ans = (prev != -1) ? max(ans , curr - prev) : ans;
                prev = curr;
            }
            curr++;
            n = n>>1;
        }

        return ans;
    }
};