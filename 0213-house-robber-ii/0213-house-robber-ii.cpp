class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int n=nums.size();
        vector<int>dp(n,-1);
        vector<int>dp2(n,-1);
        return max(solve1(nums,n-2,dp),solve2(nums,n-1,dp2));
    }
    int solve1(vector<int>&nums,int i,vector<int>&dp){
        if(i<0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i]=max(solve1(nums,i-2,dp)+nums[i],solve1(nums,i-1,dp));
    }
    int solve2(vector<int>&nums,int i,vector<int>&dp2){
        if(i<=0 )
            return 0;
        if(dp2[i]!=-1)
            return dp2[i];
        return dp2[i]=max(solve2(nums,i-2,dp2)+nums[i],solve2(nums,i-1,dp2));
    }
};