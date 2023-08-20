class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL )return true;

        return same(root->left,root->right);

    }

    bool same(TreeNode* p,TreeNode* q){
        if(p==NULL || q==NULL) return p==q;

        return (p->val == q->val) && same(p->left, q->right) && same(p->right,q->left);
    }

};