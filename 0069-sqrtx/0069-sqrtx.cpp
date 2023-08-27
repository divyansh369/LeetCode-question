class Solution {
public:
    int binarysearch(int x){
        vector<int>v;
        int s=0;
        long long int ans=-1;
        int e=x;
        long long int mid=s+(e-s)/2;;
        while(s<=e){
            long long int square=mid*mid;
            
            if(square==x){
                return mid;
            }
            else if(square < x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    
    int mySqrt(int x) {
        return binarysearch(x);
        
    }
};