class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string>str; // keep the words of each word in text
        stringstream ss(text);
        // cout<<ss.str(); // print the string
        string word;

        while(ss>>word){ // har ek word ke liye, separate the word by spaces
            str.push_back(word);
        }
        
        // now str array have each words 

        int ans = 0;
        for (int i = 0; i < str.size(); i++) {
            bool valid = true; // assume word is valid

            // check har character of word
            for (int k = 0; k < str[i].size(); k++) {
                for (int j = 0; j < brokenLetters.size(); j++) {
                    if (str[i][k] == brokenLetters[j]) { // i-th string ke k-th character.
                        valid = false; // agar broken letter mila, word invalid
                        break;
                    }
                }
                if (!valid) break; // ek bhi broken mila toh aage check nhi karna
            }

            if (valid) {
                ans++; // word valid hai toh count me add
            }
        }

        return ans;
    }
};