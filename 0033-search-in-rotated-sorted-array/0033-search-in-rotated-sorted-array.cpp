class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0; 
        int end = nums.size()-1;
        while(start <=end){
            int mid = start + (end -start)/2;
            if(nums[mid] == target) return mid;
            if(nums[start]<=nums[mid]){// ham start or mid sorted hai ya nhi pehle ye check kar rahe agar sorted hai to aage badhenge 
                if(target>=nums[start] && target <nums[mid]) end = mid -1;// aagar target element start or mid ke aandar hai to end ko mid-1 karenge nhi to start = mid +1;
                else start = mid+1;
            }else{// aab aagar start or mid sorted nhi hai or start mid se bada hai tab 
                if(target>nums[mid] && target <=nums[end]) start = mid +1; // aagar target element mid or end ke aandar hai to 
                else end = mid -1;
            }
        }
        return -1;
    }
};