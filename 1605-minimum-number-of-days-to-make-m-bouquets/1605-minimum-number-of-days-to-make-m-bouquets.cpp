class Solution {
public:
    bool check(vector<int>&bloomDay,int m,int k,int day){
        int n=bloomDay.size();

        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        
        int val=0;int cnt=0;
        for(int i=0;i<n;i++){
            if(day >= bloomDay[i] ){
                cnt++;
            }
            else{
                val += cnt/k ;
                cnt=0;
            }
        }
        val +=( cnt/k);
        if(val >= m){
            return true;
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
    long long val = m * 1ll * k * 1ll;

        int n=bloomDay.size();

        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int mini_ans=INT_MAX;

        if(val > n) return -1;
        
        int low=mini;int high=maxi;

        while(low <= high){
            int mid = high - (high - low )/2;

            if(check(bloomDay,m,k,mid)){
                high=mid-1;
                mini_ans=min(mini_ans,mid);
            }else{
                low=mid+1;
            }
        }

        return mini_ans;




































    }
};