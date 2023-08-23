class Solution {
public:
    int ans1=-1;
    int ans2=-1;
    
    void first(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int mid=(low+ high )/2;
        while(low<=high){
            if(nums[mid]==target){
                ans1=mid;
                high=mid-1;
            } 
            else if(nums[mid] > target){
                high=mid-1;
            }else{
                low=mid+1;
            }
            mid=(low+high)/2;
        }
    }

    void last(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int mid=(low+ high )/2;
        while(low<=high){
            if(nums[mid]==target){
                ans2=mid;
                low=mid+1;
            } 
            else if(nums[mid] > target){
                high=mid-1;
            }else{
                low=mid+1;
            }
            mid=(low+high)/2;
        }
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        first(nums,target);
        last(nums,target);

        return {ans1,ans2};

    }
};