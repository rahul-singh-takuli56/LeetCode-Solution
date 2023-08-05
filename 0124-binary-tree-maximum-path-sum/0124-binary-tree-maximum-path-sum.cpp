class Solution {
public:
    int height(TreeNode*root, int &maxi){
            if(root==NULL)
                return 0;
        int left=max(0,height(root->left,maxi));
        int right=max(0,height(root->right,maxi));
        
        maxi=max(maxi,left+right+root->val);
        return root->val+max(left,right);
    }
    
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
    }
};