class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i<image.size(); i++){
            // har ek row pe jao aur usko reverse karo
            int tempRow = 0;
            int end = image[0].size() - 1;

            // reverse each row
            while(tempRow < end){
                swap(image[i][tempRow], image[i][end]);
                tempRow++;
                end--;
            }
        }

        for(int i = 0; i<image.size(); i++){
            for(int j = 0; j<image[0].size(); j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j]=0;
                }
            }
        }

        return image;
    }
};