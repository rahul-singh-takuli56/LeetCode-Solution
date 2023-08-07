class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode*node=p.first;
            int x=p.second.first; //coloumn
            int y=p.second.second; //level
            nodes[x][y].insert(node->val);
            if(node->left)
                q.push({node->left,{x-1,y+1}});
            if(node->right)
                q.push({node->right,{x+1,y+1}});
            
        }

        vector<vector<int>>ans;
        for(auto p:nodes){
            vector<int>temp;
            for(auto q:p.second){
                temp.insert(temp.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};