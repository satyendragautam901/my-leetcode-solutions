class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if((n==2) && (s[0] == s[1])) // edge cases for efficient use
            return 1;
        if(n==1)
            return 0;

        int start0 = 0; // pattern 010101
        int start1 = 0; // pattern 101010

        for(int i = 0; i < n; i++){

            if(i % 2 == 0){
                if(s[i] != '0') start0++;
                if(s[i] != '1') start1++;
            }
            else{
                if(s[i] != '1') start0++;
                if(s[i] != '0') start1++;
            }
        }

        return min(start0, start1);

    }
};