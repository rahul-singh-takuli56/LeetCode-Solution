class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
            return ans;
        stack<TreeNode*>st;
        TreeNode*node=root;
        
        while(!st.empty() || node!=NULL){
            if(node!=NULL){
                st.push(node);
                ans.insert(ans.begin(),node->val);
                node=node->right;
            }
            else{
                TreeNode*node1=st.top();
                st.pop();
                node=node1->left;
            }
        }
        return ans;
    } 
};