class Solution {
public:
    int dp[201][20001];;

    bool subsetSum(vector<int>nums,int n,int tar){
        if(tar == 0) return true;

        if(n == 0) return nums[0] == tar;

        if(dp[n][tar]!=-1) return dp[n][tar];

        if(nums[n] > tar){
            return dp[n][tar] = subsetSum(nums,n-1,tar);
        }
        return dp[n][tar] = subsetSum(nums,n-1,tar-nums[n]) || subsetSum(nums,n-1,tar);
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it:nums){
            sum+=it;
        }
        memset(dp,-1,sizeof(dp));
        if(sum%2 == 0){
            return subsetSum(nums,nums.size()-1,sum/2);
        }
        return false;

    }
};