class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum(nums.size());
       for(int i=0; i<nums.size(); i++){
        if(i==0){
            runningSum[i]= nums[i];//if there is only single value then the sum will be that number only 
        }else{
            runningSum[i]=runningSum[i-1]+ nums[i];// every running sum will update its previous value so when we will calculate runningSum[2] we will take the updated value not the previous one 
            }
       } 
       return {runningSum};
    }
};