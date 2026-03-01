class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num); // convert to string so that easy to solve
        int n = str.size();
        // create an array that store right max element
        vector<int>rightMax(n);
        rightMax[n-1] = n-1;

        for(int i = n-2; i>=0; i--){
            int tempIdx = rightMax[i+1]; // store right max
            int rightMaxTemp = str[tempIdx]; // store value

            rightMax[i] = (str[i] > rightMaxTemp ? i : tempIdx);

        }
        // 9917
        for(int i = 0; i<n; i++){
            int maxRightIdx = rightMax[i];
            int maxRightEle = str[maxRightIdx];

            if(str[i] < maxRightEle){
                swap(str[i], str[maxRightIdx]);
                return stoi(str);
            }
        }
        return num;

    }
};