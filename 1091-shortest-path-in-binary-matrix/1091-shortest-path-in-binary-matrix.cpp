class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        int n=grid.size();
        int m=grid[0].size();
        
        if(grid[0][0]==1)
            return -1;
        
        if(grid[0][0]==0 and n==1 and m==1)
            return 1;
        
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        vis[0][0]=true; 
        while(!q.empty()){
            auto it=q.front().first;
            int x=it.first;
            int y=it.second;
            int length=q.front().second;
            q.pop();
            
            vector<pair<int,int>>neg={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
            for(auto it:neg){
                int newx=it.first+x;
                int newy=it.second+y;
                if(newy>=0 and newx>=0 and newx<n and newy<m and grid[newx][newy]==0 and !vis[newx][newy]){
                    q.push({{newx,newy},length+1});
                    vis[newx][newy]=true;
                    
                    if(newx==n-1 and newy==m-1)
                        return length+1;
                }
            }
        }
        return -1;
    }
};