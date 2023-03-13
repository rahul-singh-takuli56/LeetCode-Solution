/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        //Iterative approach
        if(!root)
            return true;
        stack<TreeNode*>st;
        st.push(root->left);
        st.push(root->right);
        while(!st.empty()){
            auto p=st.top();
            st.pop();
            auto q=st.top();
            st.pop();
            if(!p and !q) //i.e if null value is prsent skip current iteration
                continue;
            if(!p or !q || p->val!=q->val)
                return false;
            st.push(p->left);
            st.push(q->right);
            st.push(p->right);
            st.push(q->left);
        }
        return true;
    }
};