class Solution {
public:
    //O(log(n)) using binary search
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[i]<=nums[mid]){
                mini=min(mini,nums[i]);
                i=mid+1;
            }
            else if(nums[mid]<=nums[j]){
                mini=min(mini,nums[mid]);
                j=mid-1;
            }
        }
        return mini;
    }
};