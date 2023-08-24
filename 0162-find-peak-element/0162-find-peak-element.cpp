class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi=INT_MIN;int n=nums.size();
        int idx=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i] > maxi ){
                maxi=nums[i];
                idx=i;
            }
        }
        return idx;
    }
};