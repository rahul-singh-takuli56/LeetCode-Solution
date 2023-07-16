class Solution {
public:
    //using recursive approach
    int solve(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp){
        int n=nums.size();
        if(i==n-1) // if i is in last row then return its value 
            return nums[n-1][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int down= nums[i][j]+solve(i+1,j,nums,dp);
        int diag=nums[i][j]+solve(i+1,j+1,nums,dp);
        return dp[i][j]= min(down,diag);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,0,triangle,dp);
    }
};