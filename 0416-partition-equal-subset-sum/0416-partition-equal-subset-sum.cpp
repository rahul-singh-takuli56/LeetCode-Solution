class Solution {
public:
    bool solve(int ind,int sum,vector<int>&nums,vector<vector<int>>&dp){
        if(sum==0)
            return 0;
        if(ind==0)
            return (nums[0]==sum);
        
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
        
        bool picknot=solve(ind-1,sum,nums,dp);
        bool pick=false;
        if(nums[ind]<=sum)
            pick=solve(ind-1,sum-nums[ind],nums,dp);
        return dp[ind][sum] = pick || picknot;
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        vector<vector<int>>dp(n,vector<int>(sum,-1));
        if(sum%2!=0)
            return false;
        else
            return solve(n-1,sum/2,nums,dp);
    }
};