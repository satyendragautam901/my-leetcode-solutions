class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        int start = 1, end = n-1;

        while(start<=end){
            int a = start, b = end;
            bool ok = true; // check is there any 0 inside

            // check digits of a
            while (a > 0) {
                if (a % 10 == 0) { ok = false; break; }
                a /= 10;
            }

            // check digits of b
            while (ok && b > 0) {
                if (b % 10 == 0) { ok = false; break; }
                b /= 10;
            }

            if (ok) {
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }

            start++;
            end--;
        }

        return ans;
    }
};