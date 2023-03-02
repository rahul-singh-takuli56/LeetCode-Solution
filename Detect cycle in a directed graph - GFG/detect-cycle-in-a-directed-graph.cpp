//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    bool solve(int source,int V,vector<int>adj[],vector<int>&vis,vector<int>&dfsvis){
            vis[source]=1;
            dfsvis[source]=1;
            for(auto it:adj[source]){
                if(!vis[it]){
                    if(solve(it,V,adj,vis,dfsvis))
                    return true;
                }
                else if(dfsvis[it])
                return true;
            }
            dfsvis[source]=0;
            return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V+1,0);
        vector<int>dfsvis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(solve(i,V,adj,vis,dfsvis))
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends