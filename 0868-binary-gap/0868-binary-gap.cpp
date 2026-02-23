class Solution {
public:
    int binaryGap(int n) {
        int curr = 0;
        int prev = -1;
        int ans = 0;

        for(int i = curr ; i<32; i++){
            if(((n >> i) & 1) > 0){ // means last bit 1 rha hoga
                ans = (prev != -1) ? max(ans , i - prev) : ans;
                prev = i;
            }
                    }

        return ans;
    }
};