class Solution {
public:
    long long flowerGame(int n, int m) {
        // alice must win the game
        // alice take the first turn
        /*
        Alice will win only if first lane have even and second lane have odd flowers and vice-versa.
        */

        // count number of odd and even in both ranges n and m 
        // to be win by alice L1 must be odd and L2 must be even. because we wants only odd pairs

        long long even1 = n/2; // number of even in n ranges of flowers
        long long odd1 = (n+1)/2; //  number of odd in n ranges of flowers
        long long even2 = m/2; // number of even in m ranges
        long long odd2 = (m+1)/2; // number of odd in m ranges

        // if n have even = 1 and odd =2
        // m have even = 2 and odd = 1 then possible pairs will be eg: (1,2), (2,1), (3,2), (2,3) etcc.
        long long ans = 1LL*even1*odd2 + even2*odd1;
        return ans;


    }
};