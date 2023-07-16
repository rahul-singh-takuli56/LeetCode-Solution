class Solution {
public:
    // bottom up 
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            dp[0][i] = matrix[0][i];
        }

        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int down = dp[i - 1][j];
                int right = (j + 1 < n) ? dp[i - 1][j + 1] : INT_MAX;
                int left = (j - 1 >= 0) ? dp[i - 1][j - 1] : INT_MAX;
                dp[i][j] = matrix[i][j] + min({ down, right, left });
            }
        }

        int minSum = INT_MAX;
        for (int i = 0; i < n; i++) {
            minSum = min(minSum, dp[m - 1][i]);
        }

        return minSum;
    }
};
