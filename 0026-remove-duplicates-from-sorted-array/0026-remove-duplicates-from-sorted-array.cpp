class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;

        for(auto x : nums) {
            st.insert(x);
        }// firstly we inserted the unique elements in set 

        int i = 0;
        for(auto x : st) {// we are itertaing the set
            nums[i] = x;// we are puting value of set to nums
            i++;
        }

        return st.size();
    }
};