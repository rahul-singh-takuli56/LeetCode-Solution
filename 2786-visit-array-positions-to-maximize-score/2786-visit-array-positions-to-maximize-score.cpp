class Solution {
public:
    #define ll long long 
    ll solve(int n,int p,vector<int>&nums,int x,vector<vector<ll>>&dp){
        if(n>=nums.size()) return 0 ;
        ll picknot=0;
        ll pick=0;
        if(dp[n][p]!=-1)
            return dp[n][p];
        
        picknot=solve(n+1,p,nums,x,dp);  
        if(nums[n]%2==p)
            pick=nums[n]+solve(n+1,p,nums,x,dp);
        else
            pick=nums[n]-x+solve(n+1,nums[n]%2,nums,x,dp);
        
        return dp[n][p]= max(pick,picknot);
    }
    
    long long maxScore(vector<int>& nums, int x) {
        int n=nums.size();
        int parity=nums[0]%2;        
        vector<vector<ll>>dp(n,vector<ll>(2,-1));
        return nums[0]+solve(1,parity,nums,x,dp);
    }
};