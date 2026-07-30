class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto num: nums){
            if(st.find(num) ==st.end()){
                st.insert(num);// this line is just adding the number in the set if it in not there 
            }
            else{
                return true;// if number is there return true
            }
        }
        return false;//or return false
    }
};