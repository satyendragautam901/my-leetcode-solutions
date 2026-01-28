class Solution {
public:
    int mySqrt(int x) {
        /*

        long long i = 1;
        int ans;
        for(i; i<=x; i++){
            if(i*i == x){
                ans = i;
                break;
            }
            else if(i*i > x){
                ans = i-1;
                break;
            }
        }
        return ans;
        */

        // Binaary solution

        int start = 0;
        int end = x;
        int ans;
        while(start <= end){
            long long mid = start+ (end-start)/2;

            if(mid * mid == x){
                ans = mid;
                break;
            }
            else if(mid * mid > x){
                end = mid-1;
            }
            else{
                start = mid + 1;
                ans = mid;
            }
        }
        return ans;

    }
};