class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {

            for(int j = 0; j < n - i - 1; j++) {// this line will just short the next comming element it is not sorting the previous one so for that we are using for loop so that j loop is check each iteration of i 

                if(nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
};