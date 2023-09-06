class Solution {
public:
    vector<int>v;
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;int j=0;
        unordered_set<int>st;
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                st.insert(nums1[i]);
                i++;j++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        for(auto it:st) v.push_back(it);
        return v;
    
    
    }
};