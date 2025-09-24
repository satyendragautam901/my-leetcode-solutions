class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string ans;

        // sign handle
        if ((numerator < 0) ^ (denominator < 0)) ans += "-";
        // Computes the absolute value of a long long int

        long long num = llabs((long long)numerator);
        long long den = llabs((long long)denominator);

        // integer part
        ans += to_string(num / den);
        long long rem = num % den;
        if (rem == 0) return ans;
        ans += ".";
        unordered_map<long long, int> mp; // remainder -> index in ans

        while (rem) {
            if (mp.count(rem)) {
            ans.insert(mp[rem], "("); // waha "(" daal do jaha se repeat start hua
            ans += ")";              // aur ")" end me daal do
            break;
            }
            
            mp[rem] = ans.size();   // yeh remainder abhi kis index pe aya, note kar lo
            rem *= 10;              // decimal ke liye remainder ko 10 se multiply
            ans += to_string(rem / den); // quotient nikalo
            rem %= den;             // naya remainder bacha

        }
        return ans;
    }
};