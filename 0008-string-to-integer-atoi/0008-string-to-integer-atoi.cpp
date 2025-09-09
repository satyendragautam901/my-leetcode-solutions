class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        if(n == 0){ // if size if 0 then return
            return 0;
        }
        long long ans = 0;   // long long use overflow avoid karne ke liye
        int sign = 1;

        // 1. skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. handle sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1; // update sign
            i++;
        }

        // 3. convert digits
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // 4. handle overflow
            if (ans * sign > INT_MAX) return INT_MAX;
            if (ans * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(ans * sign);
    }
};