class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& Matrix) {
        int N=Matrix.size();
        vector<vector<int>> dp(N, vector<int>(N, 1e9));
        for (int j = 0; j < N; j++) {
            dp[0][j] = Matrix[0][j];
        }
        for (int i = 1; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int left = (j - 1 >= 0) ? dp[i - 1][j - 1] : 1e9;
                int right = (j + 1 < N) ? dp[i - 1][j + 1] : 1e9;
                int up = dp[i - 1][j];

                dp[i][j] = Matrix[i][j] + min(min(left, right), up);
            }
        }

        int maxSum = 1e9;
        for (int j = 0; j < N; j++) {
            maxSum = min(maxSum, dp[N - 1][j]);
        }

        return maxSum;
    }
};