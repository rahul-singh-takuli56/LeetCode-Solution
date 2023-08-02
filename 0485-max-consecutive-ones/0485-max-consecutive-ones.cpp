class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int maxi=0;
        int count=0;
        while(j<n){
            if(nums[j]==1){
                count++;
                maxi=max(maxi,count);
                j++;
            }
            else if(nums[j]==0){
                count=0;
                i=j;
                j++;
            }
        }
        return maxi;
    }
};