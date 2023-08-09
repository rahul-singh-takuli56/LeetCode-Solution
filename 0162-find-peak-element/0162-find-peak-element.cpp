class Solution {
public:
    //O(n)
    int findPeakElement(vector<int>& nums) {
        //all base cases and edge cases
        int maxi=INT_MIN;
        int n=nums.size();
        int ind=-1;
        if(n==1)
            return 0;
        
        if(nums[0]>nums[1]){
            ind=0;
            maxi=max(maxi,nums[0]);
        }
        
        if(nums[n-1]>nums[n-2]){
            ind=n-1;
            maxi=max(maxi,nums[n-1]);
        }
        
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                ind=i;
                maxi=max(maxi,nums[i]);
            }
        }
        return ind;
    }
};