class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int n = str.size();

        vector<int> rightMax(n); // create a vector that store max right element
        rightMax[n-1] = n-1;

        for(int i = n-2; i >= 0; i--){ // starts from second last
            int tempIdx = rightMax[i+1];// store the i+1 index assuming that one is greater

            if(str[i] > str[tempIdx]) // check if greater current then 
                rightMax[i] = i;
            else
                rightMax[i] = tempIdx;
        }

        for(int i = 0; i < n; i++){
            int maxRightIdx = rightMax[i]; // find right greater

            if(str[i] < str[maxRightIdx]){ // if current is smaller then swap
                swap(str[i], str[maxRightIdx]);
                return stoi(str);
            }
        }

        return num;
    }
};