//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int maximumPath(int N, vector<vector<int>>& Matrix) {
        vector<vector<int>> dp(N, vector<int>(N, INT_MIN));

        // Base case: initialize the first row with the values from the matrix
        for (int j = 0; j < N; j++) {
            dp[0][j] = Matrix[0][j];
        }

        // Calculate the maximum path sum row by row
        for (int i = 1; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int left = (j - 1 >= 0) ? dp[i - 1][j - 1] : INT_MIN;
                int right = (j + 1 < N) ? dp[i - 1][j + 1] : INT_MIN;
                int up = dp[i - 1][j];

                dp[i][j] = Matrix[i][j] + max(max(left, right), up);
            }
        }

        // Find the maximum sum in the last row
        int maxSum = INT_MIN;
        for (int j = 0; j < N; j++) {
            maxSum = max(maxSum, dp[N - 1][j]);
        }

        return maxSum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends