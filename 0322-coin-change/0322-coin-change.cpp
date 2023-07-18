class Solution {
public:
    int solve(int n,int w,vector<int>&coins,vector<vector<int>>&dp){
        if(w==0) return 0;
        if(n<0 || w<0)
            return INT_MAX-1;
        // if(n==0){
        //     if(w%coins[n]==0)
        //         return w/coins[n];
        //     else
        //         return -1;
        // }
        if(dp[n][w]!=-1)
            return dp[n][w];
        
        int picknot=solve(n-1,w,coins,dp);
        // int pick=INT_MAX-1;
        
        int pick=1+solve(n,w-coins[n],coins,dp);
        return dp[n][w]=min(pick,picknot);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=solve(n-1,amount,coins,dp);
        return (ans<INT_MAX-1)?ans:-1;
    }
};