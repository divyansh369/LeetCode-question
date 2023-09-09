class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach=0,currReach=0,jump=0;
        int n=size(nums);
        for(int i=0;i<n-1;i++){
            
            maxReach=max(maxReach, i+nums[i]);

            if(maxReach >= n-1) {
                jump++;
                break;
            }
            if(i==currReach){
                jump++;
                currReach=maxReach;
            }
        }
        return jump;
    }
};