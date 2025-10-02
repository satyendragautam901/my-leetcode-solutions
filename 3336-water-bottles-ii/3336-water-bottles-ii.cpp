class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;  // total bottles drunk
        int emptyBottle = numBottles;

        // Keep exchanging while possible
        while (emptyBottle >= numExchange) {
            emptyBottle -= numExchange;  // spend bottles to exchange
            numExchange++;               // next exchange costs more
            ans++;                       // you got 1 new full bottle and drank it
            emptyBottle++;               // drinking it adds 1 empty bottle
        }

        return ans;
    }
};