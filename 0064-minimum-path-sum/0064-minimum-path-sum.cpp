class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i=grid.size();
        int j=grid[0].size();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        return func(i-1,j-1,grid,dp);
    }
    int func(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==0 && j==0)
            return grid[i][j];
        if(i<0 || j<0)
            return 1e9;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=grid[i][j]+min(func(i-1,j,grid,dp),func(i,j-1,grid,dp));
    }
};