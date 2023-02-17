class Solution {
    void inorder(TreeNode*root,vector<int>&ans){
        if(root==NULL)
            return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
public:
     // if you are preorder or postorder then you will have to sort 
    // the ans vector then only mini will get correct answere
    // or we can use inorder traversal it always give answer in sorted         // manner.
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        int mini=INT_MAX;
        inorder(root,ans);
        for(int i=1;i<ans.size();i++){
            int diff=abs(ans[i]-ans[i-1]);
            mini=min(mini,diff);
        }
        return mini;
    }
};