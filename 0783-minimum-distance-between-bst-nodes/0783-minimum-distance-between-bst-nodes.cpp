class Solution {
     // if you are preorder or postorder then you will have to sort 
    // the ans vector then only mini will get correct answere
    // or we can use inorder traversal it always give answer in sorted         // manner.
    void preorder(TreeNode*root,vector<int>&ans){
        if(root==NULL)
            return ;
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        int mini=INT_MAX;
        preorder(root,ans);
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            int diff=abs(ans[i]-ans[i-1]);
            mini=min(mini,diff);
        }
        return mini;
    }
};