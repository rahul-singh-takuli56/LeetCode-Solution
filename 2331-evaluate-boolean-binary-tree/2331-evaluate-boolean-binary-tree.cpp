class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->left ==0 and root->right==0){
            if(root->val==0)
                return false;
            return true;
        }
        bool left=evaluateTree(root->left);
        bool right=evaluateTree(root->right);
        if(root->val==2)
            return left||right;
        return left and right;
    }
};