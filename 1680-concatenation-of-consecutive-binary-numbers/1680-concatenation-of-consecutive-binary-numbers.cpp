class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long result = 0;
        int length = 0; // number of bits

        for (int i = 1; i <= n; i++) {

            // if i is power of 2, increase bit length
            if ((i & (i - 1)) == 0) {
                length++;
            }

            result = ((result << length) % MOD + i) % MOD;
        }

        return result;
    }
};