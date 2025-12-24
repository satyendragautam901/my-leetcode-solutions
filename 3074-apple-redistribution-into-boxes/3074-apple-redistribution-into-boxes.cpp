class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(),greater<int>());

        int sum = 0;
        for(int a:apple){ // count how many of apples are there
            sum+=a;
        }
    
        int n = capacity.size();
        int i = 0;
        for(i; i<n; i++){
            if(sum <= 0){
                return i;
            }
            else
                sum -= capacity[i];
        }
        return i;
    }
};