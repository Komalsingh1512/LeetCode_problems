class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start =0; 
        int end = nums.size()-1;
        while(start <end)// here we are taking start <end not start <=end because when the value will be equal then it will give the answer 
        {
            int mid= start +(end-start)/2;
            if(nums[mid]<nums[mid+1]){
                start= mid+1;
            }else{
                end = mid;
            }
        }
        return start ;
    }
};
//just rember the concept and the way of answering this question 