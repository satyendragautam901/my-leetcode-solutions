class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        // first find min difference
        int min_diff = INT_MAX;
        int n = arr.size();
        for(int i = 1; i<n; i++){
            min_diff = min(min_diff, arr[i] - arr[i-1]);
        }
        vector<vector<int>> ans;

        for(int i = 1; i<n; i++){
            if(min_diff, arr[i] - arr[i-1] == min_diff)
                ans.push_back({arr[i-1], arr[i]});
           
        }

        return ans;
    }
};