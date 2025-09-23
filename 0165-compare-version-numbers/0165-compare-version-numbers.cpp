class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i = 0, j = 0; // pointers for v1 and v2
        int n = v1.size(), m = v2.size();

        while (i < n || j < m) {
            long num1 = 0, num2 = 0;

            // extract number from v1 until '.' or end
            while (i < n && v1[i] != '.') {
                num1 = num1 * 10 + (v1[i] - '0');
                i++;
            }

            // extract number from v2 until '.' or end
            while (j < m && v2[j] != '.') {
                num2 = num2 * 10 + (v2[j] - '0');
                j++;
            }

            if (num1 < num2) return -1;
            if (num1 > num2) return 1;

            // skip the dot
            i++;
            j++;
        }
        return 0;
    }
};