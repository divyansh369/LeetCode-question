class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();int sum=0;int cnt=0;
        unordered_map<int,int>mp;
        int prefix[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1] + nums[i];  
        }   
        for(int i=0;i<n;i++){
            if(prefix[i]==k) cnt++;
            if(mp.find(prefix[i]-k) != mp.end()){
                cnt += mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
        }
        return cnt;
    }
};