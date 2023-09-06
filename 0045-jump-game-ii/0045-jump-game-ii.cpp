class Solution {
public:
    int jump(vector<int>& nums) {
        queue<int>q;
        q.push(0);int jump=0;
        unordered_set<int>vis = {0};
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int ind=q.front();q.pop();
                if(ind >= nums.size()-1) return jump;
                for(int i=1;i<=nums[ind];i++){
                    int newInd= i + ind;
                    if(vis.count(newInd) ) continue;
                    vis.insert(newInd);
                    q.push(newInd);
                }
            }
            jump++;
        }
        return 0;
    }
};