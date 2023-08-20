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
    int sum(TreeNode* root,int &maxi){
        if(root==NULL) return 0;

        int lh=max(0,sum(root->left,maxi));
        int rh=max(0,sum(root->right,maxi));

        maxi=max(maxi,root->val + lh + rh);

        return max(lh,rh) + root->val;

    }

    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        sum(root,maxi);
        return maxi;
    }
};