class Solution {
public:
    int solve(int ind, int buy, vector<int>& prices, vector<vector<vector<int>>>& dp, int k) {
        if (ind == prices.size() || k == 0) 
            return 0;
        
        int &profit = dp[ind][buy][k];
        if (profit != -1)
            return profit;
        
        if (buy) {
            profit = max(-prices[ind] + solve(ind + 1, 0, prices, dp, k), solve(ind + 1, 1, prices, dp, k));
        } else { // sell
            profit = max(prices[ind] + solve(ind + 1, 1, prices, dp, k - 1), solve(ind + 1, 0, prices, dp, k));
        }
        
        return profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return solve(0, 1, prices, dp, k);
    }
};
