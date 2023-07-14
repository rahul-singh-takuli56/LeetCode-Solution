class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n,-1);
       return solve(n,dp);
    }
    int solve(int n,vector<int>&dp){
        if(n==1 || n==2)
            return n;
        if(dp[n-1]!=-1)
            return dp[n-1];
        return dp[n-1]=solve(n-1,dp)+solve(n-2,dp);
    }
};