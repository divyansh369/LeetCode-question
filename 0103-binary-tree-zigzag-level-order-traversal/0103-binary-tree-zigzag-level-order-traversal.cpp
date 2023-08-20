class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool flag=0;
        queue<TreeNode*>q;
        
        q.push(root);
        vector<vector<int>>ans;
        if(!root) return ans;

        while(!q.empty()){
            int size=q.size();
            vector<int>temp(size);

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                int index=(flag==0) ? i:size-1-i;
                temp[index]=node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            flag=!flag;
            ans.push_back(temp);
        }   
        return ans;

    }
};