class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int>mp;
        int i = 0;
        int j = 0;
        string curr = "";// temporary string to store
        vector<string>ans;
        while(j<s.size()){
            curr+=s[j];
            while(j-i+1 == 10){
                if(mp[curr] == 1)
                    ans.push_back(curr);
                mp[curr]++;
                i++;
                curr.erase(0,1);

            }
                j++;
        }

        return ans;
    }
};