class Solution {
public:
    int findClosest(int x, int y, int z) {
        int temp1 = abs(z-x); // first one
        int temp2 = abs(z-y); // second one
        int ans = 0;
        if(temp1>temp2){
            ans = 2;
        }
        else if(temp1 == temp2){
            ans =0;
        }
        else{
            ans = 1;
        }

        return ans;
    }
};