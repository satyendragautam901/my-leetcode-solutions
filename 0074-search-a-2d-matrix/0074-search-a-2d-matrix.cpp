class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ar, int target) { // stair case seach
        int rows = ar.size();
        int cols = ar[0].size();

        int i = 0; 
        int j = cols - 1;

        while (i < rows && j >= 0)
        {
            if(ar[i][j] == target){
                
                return 1;
            }

        // step 2. move target is smaller then move left.
            else if(ar[i][j] < target){
                i++;
            }

        // step 3. else move bottom.
            else{
                j--;
            }
        }

        return 0;
    }
};