class Solution {
public:
    // using topo just detect if cycle is present or not 
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int>adj[n];
        for(auto it:prerequisites){
                adj[it[1]].push_back(it[0]);
        }
        vector<int>ind(n,0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i])
                ind[it]++;
        }
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(ind[i]==0)
                q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            for(auto it:adj[node]){
                ind[it]--;
                if(ind[it]==0)
                    q.push(it);
            }
        }
        if(count==n)
            return true;
        return false;
    }
};