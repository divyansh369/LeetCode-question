class Solution {
public:
    int findMin(vector<int>& nums) {
       int l=0;
        int h=nums.size()-1;int mini=INT_MAX;
        int mid=(h+l)/2;
        while(l<=h){
            
            if(nums[l] <= nums[mid]){
                mini=min(nums[l],mini);
                l=mid+1;
            }else{
                mini=min(mini,nums[mid]);
                h=mid-1;
            }
            mid=(h+l)/2;
        }
        return mini;        
    }
};