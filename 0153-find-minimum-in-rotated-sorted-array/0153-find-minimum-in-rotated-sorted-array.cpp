class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        for(auto it:nums){
            mini=min(mini,it);
        }
        return mini;
    }
};