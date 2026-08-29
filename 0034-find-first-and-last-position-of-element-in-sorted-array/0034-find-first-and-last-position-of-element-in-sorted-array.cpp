class Solution {
public:

    int firstPosition(vector<int>& nums, int target) {

        int start = 0, end = nums.size() - 1;
        int ans = -1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                ans = mid;
                end = mid - 1;      // Search on left
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return ans;
    }

    int lastPosition(vector<int>& nums, int target) {

        int start = 0, end = nums.size() - 1;
        int ans = -1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                ans = mid;
                start = mid + 1;    // Search on right
            }
            else if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        return {firstPosition(nums, target),
                lastPosition(nums, target)};
    }
};