class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }

    TreeNode* increasingBST(TreeNode* root) {

        vector<int>v;
        inorder(root,v);
        TreeNode* r1 = new TreeNode(v[0]);
        TreeNode* ans;
        ans=r1;
        for(int i=1;i<v.size();i++){
            ans->right=new TreeNode(v[i]);
            ans=ans->right;
        }
        return r1;
    }
};