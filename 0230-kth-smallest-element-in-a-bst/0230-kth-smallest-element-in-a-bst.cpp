class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return 0;
        vector<int>ans;

        inorder(root,ans);

        k=k-1;
        int res=0;
        for(int i=0;i<=k;i++){
            res=ans[i];
        }
        return res;

    }
};