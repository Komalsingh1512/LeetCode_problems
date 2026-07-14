class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for(int i = 0; i < nums.size(); i++) {
            
            if(nums[i] == val) {
                nums.erase(nums.begin() + i);// we are here removing the value and also removing the index
                i--;   // check the current position again
            }
        }
        
        return nums.size();
    }
};