class Solution {
    void traverse(TreeNode*root,vector<int>&ans){
        if(root==NULL)
            return ;
        traverse(root->left,ans);
        ans.push_back(root->val);
        traverse(root->right,ans);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        traverse(root,ans);
        int mini=INT_MAX;
        for(int i=1;i<ans.size();i++){
            int diff=abs(ans[i]-ans[i-1]);
            mini=min(mini,diff);                
        }
        return mini;
    }
};