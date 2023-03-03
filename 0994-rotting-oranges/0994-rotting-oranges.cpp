class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(n, vector<int>(m)); // initialize vis with size n x m
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==2) {
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                } else {
                    vis[i][j] = 0;
                }
            }
        }
        
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int timer = 0;

        while(!q.empty()) {
            int r = q.front().first.first; //first row
            int c = q.front().first.second; //first col
            int time = q.front().second;
            timer = max(timer,time);
            q.pop();
            for(int i=0;i<4;i++) {
                int nrow = r+drow[i];
                int ncol = c+dcol[i];
                if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and vis[nrow][ncol]!=2 and grid[nrow][ncol]==1) {
                    q.push({{nrow,ncol},time+1});
                    vis[nrow][ncol] = 2; // update vis only if a fresh orange is affected
                }
            }
        }
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(vis[i][j]!=2 and grid[i][j]==1) // check if any fresh orange is left
                    return -1;
            }
        }
        
        return timer;
    }
};
