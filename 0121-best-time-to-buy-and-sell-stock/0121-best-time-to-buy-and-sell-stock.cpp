class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int left=0;
        int right=1;

        while(right < prices.size()){
            if(prices[left] < prices[right]){
                maxi=max(prices[right]-prices[left] , maxi);
            }
            else{
                left=right;
            }
            right++;
        }

        return maxi;
    }
};