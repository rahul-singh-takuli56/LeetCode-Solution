class Solution {
public:
    int height(TreeNode*node){
        if(node==NULL)
            return 0;
        int left=height(node->left);
        int right=height(node->right);
        
        return 1+max(left,right);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh=height(root->left);
        int rh=height(root->right);
        
        if(abs(lh-rh)>1)
            return false;
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        
        return left&&right;
    }
};