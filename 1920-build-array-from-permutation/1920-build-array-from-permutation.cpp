class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] + n * (nums[nums[i]] % n);
        } // firstly we need to calculate this, and the value that will come will update its previsous value... so to calcuate nums[5] we need to write the updated value not the previous one 

        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] / n;// after the first loop we will run this loop and the result we will get is the final result 
        }

        return nums;
    }
};