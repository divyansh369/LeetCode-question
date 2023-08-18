class Solution {
public:
    int minVal(TreeNode* root){
        root=root->right;
        while(root->left!=NULL){
            root=root->left;
        }
        return root->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;

        if(key < root->val ){
            root->left = deleteNode(root->left,key);
        }
        else if(key > root->val ){
            root->right = deleteNode(root->right,key);
        }   

        else{
            //if left child  is null
            if(root->left==NULL) return root->right;
            //if right child is null
            else if(root->right==NULL) return root->left;

            //if both child are not null    
            root->val=minVal(root);

            root->right=deleteNode(root->right,root->val);

        }
        return root;


    }
};