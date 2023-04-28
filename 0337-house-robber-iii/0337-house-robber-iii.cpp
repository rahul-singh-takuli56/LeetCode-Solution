class Solution {
public:
    int rob(TreeNode* root) {
        unordered_map<TreeNode*,int>mp;
        return helper(root,mp);
    }
    int helper(TreeNode*root,unordered_map<TreeNode*,int>&mp){
        if(root==NULL)
            return 0;
        if(mp.count(root))
            return mp[root];
        int ans=0;
        if(root->left!=NULL)
            ans+=helper(root->left->left,mp)+helper(root->left->right,mp);
        if(root->right!=NULL)
            ans+=helper(root->right->left,mp)+helper(root->right->right,mp);
        int result=max(root->val+ans,helper(root->left,mp)+helper(root->right,mp));
        mp[root]=result;
        return result;
    }
};