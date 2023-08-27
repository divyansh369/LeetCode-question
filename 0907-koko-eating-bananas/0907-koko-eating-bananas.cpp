class Solution {
public: 
    long long  req_t(vector<int>v,int hourly){
        long long  totalH = 0;
        int n = v.size();
        //find total hours:
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return  totalH;        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= 1000000000;


        while(low<=high){
            int mid=low +(high - low)/2;
            long long mid_val=req_t(piles,mid);
            if(mid_val <= h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};