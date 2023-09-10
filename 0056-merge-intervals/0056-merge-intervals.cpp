class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(ans.empty() || ans.back()[1] < start){
                ans.push_back({start,end});
            }
            else{
                ans.back()[1]=max(ans.back()[1],end);
            }
        }
        return ans;
    }
};