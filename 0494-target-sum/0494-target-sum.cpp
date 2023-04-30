class Solution {
    int subset(vector<int>&nums,int sum,int n){
        int mod=1e9+7;
        int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }   
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){//remeber 0 here
                if(nums[i-1]<=j)
                    dp[i][j]=(dp[i-1][j])%mod + (dp[i-1][j-nums[i-1]])%mod;
                else
                    dp[i][j]=(dp[i-1][j])%mod;
            }
        }
        return dp[n][sum]%mod;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(abs(target)>sum || (sum+target)%2!=0)
            return 0;
        int sum1=(sum+target)/2;
        return subset(nums,sum1,n);
    }
};