
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            if(node==NULL)
                flag=false;
            else{
                if(!flag)    
                  return false;
            q.push(node->left);
            q.push(node->right);
            }
        }
        return true;
    }
};