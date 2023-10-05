class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;int n=size(nums);
        for(int i=0;i<n;i++){
            int n1 = nums[i];
            for(int j=i+1;j<n;j++){
                if(n1 == nums[j]) cnt++;
            }
        }
        return cnt;
    }
};