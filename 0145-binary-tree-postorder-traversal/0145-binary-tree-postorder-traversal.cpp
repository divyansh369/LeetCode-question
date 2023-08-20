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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        stack<TreeNode*>s2;

        st.push(root);
        vector<int>ans;
        if(!root) return ans;
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            s2.push(temp);

            if(temp->left!=NULL) st.push(temp->left);
            if(temp->right!=NULL) st.push(temp->right);
        }
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }

};