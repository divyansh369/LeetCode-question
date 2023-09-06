class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Sort the arrays
        unordered_set<int> s;

        vector<int> ans;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size();
        int m = nums2.size();

        int i=0, j=0;

        while(i<n && j<m){
            if(nums1[i] == nums2[j] && (s.find(nums1[i]) == s.end())){
                s.insert(nums1[i]);
                ans.emplace_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};