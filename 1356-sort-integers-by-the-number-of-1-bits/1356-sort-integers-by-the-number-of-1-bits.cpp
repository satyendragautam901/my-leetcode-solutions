class Solution {
public:
    int count(int n){
        int cnt = 0;
        while(n){
            // by doing add with 1 this will give you number of 1 in that number.

            cnt += (n & 1);
            n >>= 1; // when we do shift then number will by divide by 2 or bits shift by 1.
        }

        return cnt;
    }

    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&] (int &a, int &b){ // lambda function
            int No_A = count(a);
            int No_B = count(b);

            if(No_A == No_B)
                return a < b; // Sort by actual value if bits are equal

            return No_A < No_B; // Sort by number of set bits
        };
        sort(arr.begin(), arr.end(), lambda); // sort kro lambda ke behalf pe

        return arr;
    }
};