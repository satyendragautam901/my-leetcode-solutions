class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        if (dimensions.size() == 0) return 0; // for best understanding

        double bestDiagonal = -1.0; // sabse bada diagonal
        int bestArea = 0; // ab tak ka best area

        for (int i = 0; i < (int)dimensions.size(); i++) {
            int length = dimensions[i][0]; // length 
            int width  = dimensions[i][1]; // width

            double diagonal = sqrt(1.0 * length * length + 1.0 * width * width); // find diagonal
            int area = length * width; // calculate area

            if (diagonal > bestDiagonal) { // agar recent diagonal actual diagonal se bda hai to 
                bestDiagonal = diagonal;
                bestArea = area;
            } 
            // agar diagonal same hai lekin area bda hai
            else if (diagonal == bestDiagonal && area > bestArea) { 
                bestArea = area;
            }
        }

        return bestArea;

    }
};