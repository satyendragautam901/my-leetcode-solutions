class Solution {
public:

    bool isAllSet(int x){
        return (x & (x+1)) == 0;
    }
    int smallestNumber(int n) {
        
        while(!isAllSet(n)){
            n++;
        }

        return n;
    }
};