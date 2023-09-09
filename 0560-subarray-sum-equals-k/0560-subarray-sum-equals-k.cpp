class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();int cnt=0;
        unordered_map<int,int>prevSum;

        int sum=0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == k ) cnt++;
            //check whether sum - k present in map
            if(prevSum.find(sum - k) != prevSum.end()){
                cnt += prevSum[sum-k];
            } 
            prevSum[sum]++;
        }
        return cnt;
    }
};