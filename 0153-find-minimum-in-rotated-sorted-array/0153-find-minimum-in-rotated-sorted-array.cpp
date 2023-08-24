class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            if (nums[low] <= nums[high]) {
                mini = min(mini, nums[low]);
                break;
            }
            int mid = (high + low) / 2;
            if (nums[low] <= nums[mid]) {
                mini = min(mini, nums[low]);
                low = mid + 1;
            } else if (nums[mid] <= nums[high]) {
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
        }
        return mini;
    }
};