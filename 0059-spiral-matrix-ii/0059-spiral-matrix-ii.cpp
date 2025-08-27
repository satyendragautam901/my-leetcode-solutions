class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // Step 1: n x n matrix banao, initially sab 0
        vector<vector<int>> ans(n, vector<int>(n, 0));

        int top = 0; 
        int bottom = n - 1;
        int left = 0; 
        int right = n - 1;

        int num = 1; // fill karne ke liye number 1 se n*n tak

        // Step 2: Spiral filling
        while (top <= bottom && left <= right) {
            // 1) left → right
            for (int i = left; i <= right; i++) {
                ans[top][i] = num++;
            }
            top++;

            // 2) top → bottom
            for (int i = top; i <= bottom; i++) {
                ans[i][right] = num++;
            }
            right--;

            // 3) right → left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans[bottom][i] = num++;
                }
                bottom--;
            }

            // 4) bottom → top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = num++;
                }
                left++;
            }
        }

        return ans;
    }
};
