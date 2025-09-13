class Solution {
public:
    bool isVowel(char ch){ // it check the ch is vowel or not
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
        else {
            return false;
        }
    }
    int maxFreqSum(string s) {
        // store max frequequncy of vowels and consonants
        int No_vowels = 0;
        int No_consonants = 0;

        // store frequency of vowels and consonants
        vector<int>vowel(5,0);
        vector<int>consonant(26,0);

        for(int i = 0; i<s.size(); i++){
            if(isVowel(s[i])){// agar ch vowel hai to vowel wale array me freque....
                if(s[i]=='a') vowel[0]++;
                else if(s[i]=='e') vowel[1]++;
                else if(s[i]=='i') vowel[2]++;
                else if(s[i]=='o') vowel[3]++;
                else if(s[i]=='u') vowel[4]++;
            }
            else{
                consonant[s[i]-'a']++; // nhi to consonants....

            }
        }

        // find the max frequency
        int temp_vowel = 0;
        for(int i = 0; i<5; i++){
            temp_vowel = max(temp_vowel, vowel[i]);
        }

        int temp_cons = 0;
        for(int i = 0; i<26; i++){
            temp_cons = max(temp_cons, consonant[i]);
        }
        return temp_vowel + temp_cons;
    }
};