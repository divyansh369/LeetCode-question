/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,int val){
        if(root==NULL) return ;
        if(root->left ==NULL && root->right==NULL){
            TreeNode* x=new TreeNode(val);
            if(root->val < val) root->right=x;
            else root->left=x;
        }

        if(root->left->val < val){
            root=root->right;
        } 
        else{
            root=root->left;
        }

    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* x=new TreeNode(val);
        if(!root) return x;
        TreeNode* curr=root;

        while(true){
            if(curr->val <= val){
                if(curr->right!=NULL) curr=curr->right;
                else{
                    curr->right=x;
                    break;
                }
            }
            else{
                if(curr->left!=NULL) curr=curr->left;
                else{
                    curr->left=x;
                    break;
                }
            }
        }
        return root;




    }
};














