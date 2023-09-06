class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0;int farthest=0;int jump=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest, i + nums[i]);
            if(curr==i){
                curr=farthest;
                jump++;
            }
        }
        return jump;
    }
};