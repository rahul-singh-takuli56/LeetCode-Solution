class Solution {
public:
    int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
        solve(root,NULL,NULL);
        return sum;
    }
    void solve(TreeNode*root,TreeNode*parent,TreeNode*grandparent){
        if(!root)
            return ;
        if(grandparent!=NULL and grandparent->val%2==0){
            sum+=root->val;
        }
        solve(root->left,root,parent);
        solve(root->right,root,parent);
    }
};