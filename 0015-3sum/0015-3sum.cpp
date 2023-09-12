class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i >0 ) {
                if(nums[i] == nums[i-1]) continue;
            }
            int low=i+1;
            int high=n-1;
            int sum=0;
            while(low < high){
                sum=nums[i] + nums[low] + nums[high];
                if( sum > 0){
                    high--;
                }else if(sum < 0){
                    low++;
                }else{
                    ans.push_back({nums[i] , nums[low] ,nums[high]});
                    int first=nums[low];
                    int last=nums[high];
                    low++;high--;
                    while(low < high && first == nums[low]) low++;
                    while(low < high && last == nums[high]) high--;
                }
            }
        }
        return ans;
    }
};