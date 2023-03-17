class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int len=postorder.size();
        return solve(inorder,postorder,0,len-1,0,len-1);
    }
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int is, int ie, int ps, int pe) {
    if (is > ie)
        return NULL;
    int rootval = postorder[pe];
    TreeNode* root = new TreeNode(rootval);
    int rootind = 0;
    for (rootind = 0; rootind <= ie; rootind++) {
        if (inorder[rootind] == rootval)
            break;
    }
    //inorder se he pta leghegha
    int lefttreesize = rootind - is;
    int righttreesize = ie - rootind;

    root->left = solve(inorder, postorder, is, rootind - 1, ps, ps + lefttreesize - 1);
    root->right = solve(inorder, postorder, rootind + 1, ie, pe - righttreesize, pe - 1);
    return root;
    }
};