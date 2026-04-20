class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        if(n==2)
            return 1;
        
        int ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(colors[i] != colors[j]){
                    ans = max(ans, abs(j-i));
                }
            }
        }

        return ans;
    }
};