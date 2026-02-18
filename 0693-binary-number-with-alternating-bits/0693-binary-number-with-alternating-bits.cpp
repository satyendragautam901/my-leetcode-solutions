class Solution {
public:
    bool hasAlternatingBits(int n) {
        // first store current bit
        int currBit = n % 2;
        n = n/2;

        while(n>0){
            if(currBit == n%2){
                return false;
            }
            currBit = n%2;// update current bit
            n = n/2;
        }

        return true;
    }
};