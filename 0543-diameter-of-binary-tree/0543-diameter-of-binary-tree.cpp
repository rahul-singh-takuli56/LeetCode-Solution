class Solution {
public:
    // O(n)
    int height(TreeNode*root, int& maxi){
        if(root==NULL)
            return 0;
        int left=height(root->left,maxi);
        int right=height(root->right,maxi);
        
        maxi=max(maxi,left+right);
        
        return 1+max(left,right);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        height(root,maxi);
        return maxi;
    }
};