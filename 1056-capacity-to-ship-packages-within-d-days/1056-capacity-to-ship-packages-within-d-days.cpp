class Solution {
public:
    bool check(vector<int>&v,int threshold,int wt){
        int res=0;int day=1;
        for(int i=0;i<v.size();i++){
            if(res + v[i] > wt){
                day+=1;
                res=v[i];
            }else{
                res+=v[i];
            }
        }

        if(threshold < day) return false;
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(auto it:weights){
            sum+=it;
        }

        int low=maxi;
        int high=sum;

        while(low<=high){
            int mid=low + (high-low)/2;
            if(check(weights,days,mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }   
        return low;

    }
};