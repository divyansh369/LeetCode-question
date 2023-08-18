/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // int small=min(p->val , q->val);
        // int large=max(p->val , q->val);
    
        // while(root){
        //     if(root->val > large){
        //         root=root->left;
        //     }
        //     else if(root->val < small){
        //         root=root->right;
        //     }else{
        //         return root;
        //     }
        // }

        if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        else if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else{
            return root;
        }

        return NULL;
    }
};