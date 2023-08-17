class Solution {
public:
    bool isValidBST(TreeNode* root) {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        return isvalid(root,LONG_MIN,LONG_MAX);
    }
    
    bool isvalid(TreeNode* root,long mini,long maxi){
        if(root==NULL) return true;
        if(root->val >= maxi || root->val <= mini) return false;

        return isvalid(root->left,mini,root->val) && isvalid(root->right,root->val,maxi);

    }

};