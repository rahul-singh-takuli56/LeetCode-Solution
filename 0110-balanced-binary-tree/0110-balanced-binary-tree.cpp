// In O(n)
class Solution {
public:
    //basically it will calculate the height of tree
    // and wherever the value of subtree  is greate then 1 it will return -1
    // if -1 for any subtree more specifically for left or right while backtracking 
    // it will return -1;
    
    int height_tree(TreeNode*root){
        if(root==NULL)
            return 0;
        
        int left=height_tree(root->left);
        int right=height_tree(root->right);
        
        if(left==-1 || right==-1)
            return -1;
        
        if(abs(left-right)>1)
            return -1;
        
        return max(left,right)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        return height_tree(root)!=-1; // fun will return -1 if it is balanced
    }
};