class Solution {
public:
    //using binary search
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==nums[l] && nums[mid]==nums[r]){
                mini=min(mini,nums[mid]);
                l=l+1;
                r=r-1;
                continue;
            }
            if(nums[l]<=nums[mid]){
                mini=min(mini,nums[l]);
                l=mid+1;
            }
            else if(nums[mid]<=nums[r]){
                mini=min(mini,nums[mid]);
                r=mid-1;
            }
        }
        return mini;
    }
};