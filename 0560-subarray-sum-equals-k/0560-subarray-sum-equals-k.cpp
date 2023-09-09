class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();int cnt=0;
        unordered_map<int,int>prevSum;

        vector<int>prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i] = arr[i] + prefix[i-1];
        }
        int sum=0;
        for(int i=0;i<n;i++){

            if(prefix[i]==k) cnt++;
            if(prevSum.find(prefix[i] - k) != prevSum.end()){
                cnt += prevSum[prefix[i] - k];
            }
            prevSum[prefix[i]]++;
        }
        return cnt;
    }
};