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
    TreeNode* search(int look ,TreeNode* clone){
        if(clone==NULL) return NULL;
        if(clone->val == look){
            return clone;
        } 
        TreeNode* left  = search(look,clone->left);
        if(left) return left;

        TreeNode* right = search(look,clone->right);
        if(right) return right;
        return NULL;
        
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int look=target->val;

        return search(look ,cloned);

    }
};