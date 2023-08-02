class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=0;
        int i=0,j=0;
        int n=nums.size();
        int zero=0;
        while(j<n){
            if(nums[j]==1)
                j++;
            else if(nums[j]==0){
                zero++;
                j++;
            }
            while(zero>k){
                if(nums[i]==0)
                    zero--;
                i++;
            }
            maxi=max(maxi,j-i);
        }
        return maxi;
    }
};