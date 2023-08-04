class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        
        stack<TreeNode*> stk;
        stk.push(root);
        
        while (!stk.empty()) {
            TreeNode* node = stk.top();
            stk.pop();
            ans.push_back(node->val);
            
            if (node->right != nullptr)
                stk.push(node->right);
            
            if (node->left != nullptr)
                stk.push(node->left);
        }
        
        return ans;
    }
};