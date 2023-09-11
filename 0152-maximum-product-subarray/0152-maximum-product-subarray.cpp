class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int  n=nums.size();
        int l=1;int r=1;
        int maxi=INT_MIN;
        int prod=1;

        for(int i=0;i<n;i++){
            if(l==0) l=1;
            if(r==0) r=1;
            l=l * nums[i];
            r=r * nums[n-i-1];
            maxi=max(maxi,max(l,r));
        }
        return maxi;
    }
};