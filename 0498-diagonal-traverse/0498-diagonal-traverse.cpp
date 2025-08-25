class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();     // total rows
        int n = mat[0].size();  // total columns

        vector<int> ans;
        ans.reserve(m * n);     
        // reserve = pehle se memory allocate kar lena 
        // kyunki hume pata hai final size hamesha m*n hoga
        // isse push_back karte waqt baar-baar memory resize nahi hoga 
        // performance fast ho jaati hai

        // har diagonal traverse karna hai → total diagonals = m + n - 1
        for (int d = 0; d < m + n - 1; d++) {
            vector<int> temp;   // ek diagonal ke elements temporarily store karenge

            // starting row decide karo
            // agar diagonal index n (cols) se chhota hai to row=0 se start hoga
            // warna neeche ki rows se start hoga
            int r = (d < n) ? 0 : d - n + 1;

            // starting column decide karo
            // agar diagonal index n se chhota hai to col = d hoga
            // warna last col (n-1) se start hoga
            int c = (d < n) ? d : n - 1;

            // ek diagonal traverse karo
            while (r < m && c >= 0) {
                temp.push_back(mat[r][c]); // element store karo
                r++;  // neeche move
                c--;  // left move
            }

            // agar diagonal ka index even hai → upar se neeche jaana hai
            // isliye reverse karna padega (kyunki hum neeche se upar collect kar rahe the)
            if (d % 2 == 0) {
                reverse(temp.begin(), temp.end());
            }

            // temp ke elements final ans me add kar do
            ans.insert(ans.end(), temp.begin(), temp.end());
        }

        return ans;
    }
};
