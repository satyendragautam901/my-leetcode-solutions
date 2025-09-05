class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long val = (long long)num1 - (long long)k * num2;

            if (val < k) continue; // at least k needed (sum of k powers of two >= k)

            int bits = __builtin_popcountll(val); // count set bits in val

            if (bits <= k) {
                return k; // minimum operations found
            }
        }
        return -1; // not possible
    }
};