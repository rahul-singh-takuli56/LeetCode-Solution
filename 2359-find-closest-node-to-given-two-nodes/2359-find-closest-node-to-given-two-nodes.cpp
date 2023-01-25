class Solution {
    void path(int i,int distance,vector<int>&edges,vector<int>&pathes){
        while(i!=-1 && pathes[i]==-1){
            pathes[i]=distance++;
            i=edges[i];
        }
    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int ans=-1;
        int mini=INT_MAX;
        int n=edges.size();
        vector<int>path1(n,-1),path2(n,-1);
        path(node1,0,edges,path1);
        path(node2,0,edges,path2);
        for(int i=0;i<n;i++){
            if(min(path1[i],path2[i])>=0 && max(path1[i],path2[i])<mini){
                mini=max(path1[i],path2[i]);
                ans=i;
            }
        }
        return ans;
    }
};