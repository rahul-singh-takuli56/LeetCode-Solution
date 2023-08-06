class Solution {
public:
    //Iterative approach
    //level order traversal
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>queue;
        queue.push(p);
        queue.push(q);
        while(queue.size()!=0){
            TreeNode*a=queue.front();
            queue.pop();
            TreeNode*b=queue.front();
            queue.pop();
            
            if(a==NULL && b==NULL)
                continue; // if both pair either left or right are null move to other pair either 
                         // right or left resp.
            if(a==NULL || b==NULL)
                    return false;
            
            if(a->val != b->val)
                return false;
            
            queue.push(a->left);
            queue.push(b->left);
            queue.push(a->right);
            queue.push(b->right);
        }
        return true;
    }
};