class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int negative = 0;

        for(int i = 0; i<row; i++){
            for(int j= 0; j<col; j++){
                if(grid[i][j] < 0){
                    negative++;
                }
            }
        }
        return negative;
    }
};