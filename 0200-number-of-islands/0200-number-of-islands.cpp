class Solution {
    void dfs(vector<vector<char>>&grid,int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0' || grid[i][j]=='2')
            return ;
        grid[i][j]='2'; // 2 will represent the marked islands
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j-1,m,n);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,m,n);
                    ans++;
                }
            }
        }
        return ans;
    }
};