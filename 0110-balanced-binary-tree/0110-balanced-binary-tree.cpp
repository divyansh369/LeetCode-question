class Solution {
public:
    int check(TreeNode* root){
        if(root==NULL) return 0;

        int lh=check(root->left);
        if(lh==-1) return -1;
        
        int rh=check(root->right);
        if(rh==-1) return -1;

        if(abs(lh-rh) > 1) return -1;

        return 1+max(lh,rh);
    }

    bool isBalanced(TreeNode* root) {
        return check(root)!=-1;
    }
};