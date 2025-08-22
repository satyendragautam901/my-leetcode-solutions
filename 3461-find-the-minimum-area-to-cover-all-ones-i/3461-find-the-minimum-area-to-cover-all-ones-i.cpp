class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        // first set boundry
        int minimumRow = grid.size();
        int maximumRow = -1;
        int minimumCol = grid[0].size();
        int maximumCol = -1;

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    minimumRow = min(minimumRow, i);
                    maximumRow = max(maximumRow, i);
                    minimumCol = min(minimumCol, j);
                    maximumCol = max(maximumCol, j);
                }
            }
        }
        // this is formula to convert to area eg: height * width
        long long area = 1LL*(maximumRow - minimumRow +1) * (maximumCol - minimumCol +1);

        return area;
    }
};