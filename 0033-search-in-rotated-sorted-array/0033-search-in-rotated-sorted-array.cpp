class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid=(h+l)/2;
        while(l<=h){
            if(nums[mid]==target) return mid;
            if(nums[l] <= nums[mid]){
                if(nums[l] <= target && target <=nums[mid] ){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }
            
            else{
                if(nums[mid] <= target && target <=nums[h] ){
                    l=mid+1;
                }else{
                    h=mid-1;
                }
            }
         mid=(h+l)/2;
        }
        return -1;
        
    }
};