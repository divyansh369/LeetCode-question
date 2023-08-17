class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
        if(n==1) return intervals;

        sort(intervals.begin(),intervals.end());

        // for(int i=0;i<n;i++){
        //     int start=intervals[i][0];
        //     int end=intervals[i][1];

        //     if(!ans.empty() && end <= ans.back()[1]) continue;
        //     for(int j=i+1;j<n;j++){
        //         if(intervals[j][0] <= end){
        //             end=max(end,intervals[j][1]);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     ans.push_back({start,end});

        // }

        for(int i=0;i<n;i++){
            if(ans.empty()) ans.push_back(intervals[i]);
            else{
                vector<int>&temp=ans.back();
                int end=temp[1];
                if(intervals[i][0] <= end){
                    temp[1]=max(end,intervals[i][1]);
                }
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;

    }
};