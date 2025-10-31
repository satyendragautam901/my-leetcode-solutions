class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> result;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto& pair : mp) {
            if (pair.second == 2) {
                result.push_back(pair.first);
            }
        }

        return result;
    }
};