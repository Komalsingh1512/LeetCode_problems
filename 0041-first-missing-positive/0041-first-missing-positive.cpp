class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int ans =1;
        sort(nums.begin(), nums.end());

        //we are checking first positive so it will work correctly 
        for(int i =0; i<n; i++){
            if(nums[i]==ans)
            ans++;
        }
        return ans;
    }
};