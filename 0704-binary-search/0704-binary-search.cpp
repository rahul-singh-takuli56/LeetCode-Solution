class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){  // = remember
            int mid=low+(high-low); // always write mid inside while loop
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else 
                low=mid+1;
        }
        return -1;
    }
};