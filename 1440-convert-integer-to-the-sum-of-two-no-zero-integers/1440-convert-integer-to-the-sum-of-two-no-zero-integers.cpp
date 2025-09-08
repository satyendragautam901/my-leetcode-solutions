class Solution {
public:
    bool isNoZero(int num) {
        while (num > 0) {
            if (num % 10 == 0)
                return false; // agar koi digit 0 hai
            num /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for (int a = 1; a < n; a++) {
                int b = n - a;
                if (isNoZero(a) && isNoZero(b)) {
                    ans.push_back(a);
                    ans.push_back(b);
                    return ans;
                }
            }
            return ans;
            
    }
};