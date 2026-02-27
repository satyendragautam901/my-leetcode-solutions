class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if( left == 0 && right == 0)
            return 0;
        
        int cnt = 0;
        while(left != right){ // find kro kaha tak bit same hai
            cnt++;
            left >>=1;
            right>>=1;
        }

        return left<<cnt;
        

    }
};