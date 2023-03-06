class Solution {
    bool dfs(int start,int colour,vector<vector<int>>&graph,vector<int>&col){
        col[start]=colour;
        for(auto it:graph[start]){
            if(col[it]==-1){
                if(dfs(it,!colour,graph,col)==false)
                    return false;
            }
            else if(col[it]==colour)
                return false;
        }
        return true;
    }
public:
    //using dfs 
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,-1);
        for(int i=0;i<n;i++){
            if(col[i]==-1){
            if(dfs(i,0,graph,col)==false) // for diff component's
                return false;
            }
        }
        return true;
    }
};