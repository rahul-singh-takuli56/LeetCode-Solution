class Solution {
    int subset(vector<int>&arr,int sum,int n){
         int mod=1e9+7;
	    int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(arr[i-1]<=j)
                    dp[i][j]=(dp[i-1][j])%mod + (dp[i-1][j-arr[i-1]])%mod;
                else
                    dp[i][j]=(dp[i-1][j])%mod;
            }
        }
        return (dp[n][sum])%mod;
            
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum < abs(target) || (target+sum) %2 != 0) return 0;
        int s1=(sum+target)/2;
        return subset(nums,s1,n);
    }
};