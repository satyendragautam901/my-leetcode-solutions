class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
        else {
            return false;
        }
    }

    string sortVowels(string s) {
        if(s.size() == 0){
            return s;
        }

        // Step1: saare vowels ko extract kro
        vector<char> vowels;
        for(char c : s){
            if(isVowel(c)){
                vowels.push_back(c);
            }
        }

        // Step2: unhe sort kro
        sort(vowels.begin(), vowels.end());

        // Step3: string me vowels ke place pe sorted vowels wapas daalo
        int idx = 0;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                s[i] = vowels[idx++];
            }
        }

        return s;
    }
};