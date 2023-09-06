class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),farthest=0,left=0,right=0,jump=0;

        while(farthest<n-1){
            jump++;
            for(int i=left;i<=right;i++){
                farthest=max(farthest, i+nums[i]);
            }
            left=right+1;
            right=farthest;

        }
        return jump;
    }
};