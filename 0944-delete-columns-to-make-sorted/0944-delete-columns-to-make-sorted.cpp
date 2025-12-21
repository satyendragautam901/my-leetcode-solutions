class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();         // number of rows
        int m = strs[0].size();      // number of columns
        int count = 0;
        
        // Check each column
        for (int col = 0; col < m; col++) {
            // Check if this column is NOT sorted
            for (int row = 1; row < n; row++) {
                // If current character is smaller than previous in this column
                if (strs[row][col] < strs[row - 1][col]) {
                    count++;
                    break;  // No need to check further in this column
                }
            }
        }
        
        return count;
    }
};