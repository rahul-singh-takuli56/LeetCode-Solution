class Solution {
    void dfs(int row, int col, vector<vector<char>>& board, vector<vector<int>>& vis) {
        int n = board.size();
        int m = board[0].size();
        vis[row][col] = 1;
        int delrow[4] = {-1, 0, +1, 0};
        int delcol[4] = {0, +1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and vis[nrow][ncol] == 0 and board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, board, vis);                
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        // for first column and last column
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O' and !vis[i][0]) {
                dfs(i, 0, board, vis);
            }
            if (board[i][m - 1] == 'O' and !vis[i][m-1]) {
                dfs(i, m - 1, board, vis);
            }
        }
       
        // for first row and last row
        for (int i = 0; i < m; i++) {
            if (board[0][i] == 'O' and !vis[0][i]) {
                dfs(0, i, board, vis);
            }
            if (board[n - 1][i] == 'O' and !vis[n-1][i]) {
                dfs(n - 1, i, board, vis);
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' and !vis[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
