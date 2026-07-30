class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];// it will give give me the xor value 
        }

        return ans;
    }
};