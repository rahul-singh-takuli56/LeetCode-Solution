//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int solve(int ind,vector<int>&height,vector<int>&dp){
        if(ind==0)
            return 0;
            if(dp[ind]!=-1)
                return dp[ind];
        int left=solve(ind-1,height,dp)+abs(height[ind]-height[ind-1]);
        int right=INT_MAX;
        if(ind>1)
        right=solve(ind-2,height,dp)+abs(height[ind]-height[ind-2]);
        return dp[ind]=min(left,right);
    }
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n+1,-1);
        return solve(n-1,height,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends