class Solution {
public:
    int count(int n){
        int cnt = 0;
        while(n){
            // by doing add with 1 this will give you number of 1 in that number.

            cnt = cnt + n & 1;
            n >>= 1; // when we do shift then number will by divide by 2 or bits shift by 1.
        }

        return cnt;
    }

    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&] (int &a, int &b){ // lambda function
            int No_A = __builtin_popcount(a);
            int No_B = __builtin_popcount(b);

            if(No_A == No_B)// if both have same no then return greater one
                return a<b;

            return No_A < No_B;
        };
        sort(arr.begin(), arr.end(), lambda); // sort kro lambda ke behalf pe

        return arr;
    }
};