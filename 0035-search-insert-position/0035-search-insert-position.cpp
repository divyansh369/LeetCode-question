class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int low=0;
        int high=nums.size()-1;
        int mid=(low+ high )/2;
        while(low<=high){
            if(nums[mid]==target) return mid;
            else if(nums[mid] > target){
                high--;
            }else{
                ans=low+1;
                low++;
            }
            mid=(low+high)/2;
        }
        return ans;

    }
};