class Solution {
public:
    //bfs se
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            if(node->val%2==0){
                if(node->left!=NULL){
                    if(node->left->left!=NULL)
                        sum+=node->left->left->val;
                    if(node->left->right!=NULL)
                        sum+=node->left->right->val;
                }
                if(node->right!=NULL){
                    if(node->right->right!=NULL)
                        sum+=node->right->right->val;
                    if(node->right->left!=NULL)
                        sum+=node->right->left->val;
                }
            }
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        return sum;
    }
};