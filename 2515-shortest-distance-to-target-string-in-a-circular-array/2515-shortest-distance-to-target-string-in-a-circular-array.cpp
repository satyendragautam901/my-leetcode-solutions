class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();
        
        for(int i = 0; i<n ; i++){
            if(words[i]==target){
                int forward_dist = abs(i-startIndex);
                int circular_dist = abs( n - forward_dist);
                ans = min({ans, forward_dist,circular_dist});
            }
                
        }

        return ans == INT_MAX ? -1 : ans;
    }
};