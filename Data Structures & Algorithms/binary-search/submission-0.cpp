class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0; // first element index
        int right = n-1; //last index
        while(left <= right){
            int mid = left + ((right-left)/2); // middlemost element value
            if(nums[mid] > target){
                right = mid - 1; // ending side boundary
            }
            else if(nums[mid] < target)
                left = mid + 1;  // starting boundary
            else 
                return mid;
        }
        return -1; // element not in nums
    }
};
