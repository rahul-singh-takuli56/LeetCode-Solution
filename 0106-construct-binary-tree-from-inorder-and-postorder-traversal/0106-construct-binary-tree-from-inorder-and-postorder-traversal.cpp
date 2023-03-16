class Solution {
public:
    TreeNode* solve(vector<int>&inorder, int is,int ie,vector<int>&postorder,int ps,int pe, map<int,int>& mp){
        if (is > ie || ps > pe) {
            return nullptr;
        }
        TreeNode* root=new TreeNode(postorder[pe]);
        int inroot=mp[postorder[pe]];
        int numsleft=inroot-is;
        root->left=solve(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,mp);
        root->right=solve(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,mp);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        int m=inorder.size();
        int n=postorder.size();
        return solve(inorder,0,m-1,postorder,0,n-1,mp);
    }
};
