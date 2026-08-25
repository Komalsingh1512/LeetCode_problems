class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); // here we are giving -1 to every element in ans, if we will find the greater element we will replace it 
        stack<int> st;
        for(int i = 2*n - 1; i >= 0; i--) {
            int index = i % n;
            while(!st.empty() && st.top() <= nums[index]) {
                st.pop();
            }
            if(i < n) {
                if(!st.empty()) {
                    ans[index] = st.top();
                }
            }
            st.push(nums[index]);
        }
        return ans;
    }
};
//we use a stack to efficiently find the next greater element for each number in a circular array. We traverse the array twice using 2*n because after reaching the end, we need to check elements from the beginning again. i % n helps us move back to the beginning of the array. While processing from right to left, we remove elements from the stack that are smaller than or equal to the current element because they cannot be the next greater element. If the stack is not empty, its top element is the next greater element, so we store it in ans; otherwise, the answer remains -1. Finally, we push the current element into the stack because it may be the next greater element for another element. 