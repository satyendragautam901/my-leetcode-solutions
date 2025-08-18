class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char c : s) {
            freq1[c - 'a']++;
        }
        for (char c : t) {
            freq2[c - 'a']++;
        }

        return freq1 == freq2;
    }
};
