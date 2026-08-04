class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n, 1);

        // Store left products
        int left = 1;

        for (int i = 0; i < n; i++) {
            ans[i] = left;
            left *= nums[i];
        }

        // Multiply by right products
        int right = 1;

        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};