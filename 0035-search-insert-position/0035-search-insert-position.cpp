class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid] == target){ // if target equals to mid element
                return mid;
            }
            else if(nums[mid] < target){ // if mid is lesser than target
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return start;
    }
};