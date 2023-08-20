class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>mpp;
        queue<pair<TreeNode*,pair<int,int>>>q;

        vector<vector<int>>ans;
        q.push({root,{0,0}});

        while(!q.empty()){
            int size=q.size();
            vector<int>temp;

            for(int i=0;i<size;i++){
                auto it=q.front();
                q.pop();

                TreeNode* node=it.first;
                int vertical=it.second.first;
                int level=it.second.second;

                mpp[vertical][level].push_back(node->val);
                
                if(node->left) q.push({node->left,{vertical -1, level+ 1 }});
                if(node->right) q.push({node->right,{vertical +1, level+ 1 }});
            }
        }   
        for(auto i:mpp){
            vector<int>col;
            for(auto j:i.second){
                sort(j.second.begin(),j.second.end());
                for(auto k:j.second){
                    col.push_back(k);
                }
            }
            ans.push_back(col);
        }
        return ans;
    }
};