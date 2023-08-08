class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int start_ind=-1;
        int end_ind=-1;
        int i=0,j=nums.size()-1;
        while(i<=j){
            // for first occurence
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                start_ind=mid;
                j=mid-1;
            }
            else if(nums[mid]>target)
                j=mid-1;
            else
                i=mid+1;
        }
        
        i=0,j=nums.size()-1;
        // for last occurence
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                end_ind=mid;
                i=mid+1;
            }
            else if(nums[mid]>target)
                j=mid-1;
            else 
                i=mid+1;
        }
        ans[0]=start_ind;
        ans[1]=end_ind;
        return ans;
    }
};