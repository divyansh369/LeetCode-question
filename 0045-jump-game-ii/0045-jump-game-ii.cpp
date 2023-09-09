class Solution {
public:
    int jump(vector<int>& nums) {
        int currReach=0,maxReach=0,jump=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            maxReach = max(maxReach,i+nums[i]);
            if(maxReach >= nums.size()-1){
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