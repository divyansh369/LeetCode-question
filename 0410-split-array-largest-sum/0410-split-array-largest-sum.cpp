class Solution {
public:
    int isPossible(vector<int>&nums,int split){
        int no_arr=1;int total=0;        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] + total <= split){
                total += nums[i];
            }else{
                no_arr++;
                total=nums[i];
            }
        } 
        return no_arr;
    }

    int splitArray(vector<int>& nums, int k) {
        int start=*max_element(nums.begin(),nums.end());
        int end=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        if(k > n) return -1;

        while(start <= end){
            int mid=(start + end)/2;
            int s=isPossible(nums,mid);
            if(s <= k){
                end=mid-1;
            }else{
                start = mid+1;
            }
        }
        return start;


    }
};