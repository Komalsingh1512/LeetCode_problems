class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums) {//ye ek ek karke sare elements ko lega 

            if(st.find(num) != st.end())// ye check kar raha kya ye element stack me hai?? aagar hai to true return karo aagar nhi hai to insert karo set me 
                return true;

            st.insert(num);
        }

        return false;
    }
};