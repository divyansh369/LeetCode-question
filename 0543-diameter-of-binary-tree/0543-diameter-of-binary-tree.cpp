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
    int check(TreeNode* root,int &dist){
        if(root==NULL) return 0;

        int lh=check(root->left,dist);
        int rh=check(root->right,dist);

        dist=max(dist,(lh+rh));

        return 1+max(lh,rh);

    }

    int diameterOfBinaryTree(TreeNode* root) {
        int dist=0;
        check(root, dist);
        return dist;
    }
};