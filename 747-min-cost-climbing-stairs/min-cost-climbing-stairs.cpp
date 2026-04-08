class Solution {
public:
    int func(vector<int>&arr,int n,vector<int>&dp){
        if(n<=1){
            return arr[n];
        }
        if(dp[n] != -1) return dp[n];
        return dp[n] = arr[n] + min(func(arr,n-1,dp),func(arr,n-2,dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,-1);
        int ans =  min(func(cost,n-1,dp), func(cost,n-2,dp));
        return ans;
    }
};