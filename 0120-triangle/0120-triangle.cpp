class Solution {
public:
    //using bottom up  approach
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        //base case
        for(int i=0;i<n;i++){
            dp[n-1][i]=triangle[n-1][i];
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int down=dp[i+1][j]+triangle[i][j];
                int dig=dp[i+1][j+1]+triangle[i][j];
                dp[i][j]=min(down,dig);
            }
        }
        return  dp[0][0];
    }
};