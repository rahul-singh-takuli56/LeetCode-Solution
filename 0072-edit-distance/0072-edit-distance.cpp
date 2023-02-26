class Solution {
public:
    int solve(string &word1,string &word2,vector<vector<int>>&dp,int i,int j){
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(j==0){
            dp[i][j]=i;
            return i;
        }
        if(i==0){
            dp[i][j]=j;
            return j;
        }
        if(word1[i-1]==word2[j-1])
            dp[i][j]=solve(word1,word2,dp,i-1,j-1);
        else{
            int ins=solve(word1,word2,dp,i,j-1);
            int del=solve(word1,word2,dp,i-1,j);    
            int rep=solve(word1,word2,dp,i-1,j-1);
            dp[i][j]=1+min({ins,del,rep});
        }
        return dp[i][j];
    }
    
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(word1,word2,dp,m,n);
    }
};