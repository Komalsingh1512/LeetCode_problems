class Solution {
public:
    int singleNumber(vector<int>& nums) {
      set<int>st;
      for(auto num: nums){
        if(st.find(num) ==st.end())// this lines say is the lement is not in the list then only insert 
        st.insert(num);
        else{
            st.erase(num);
        }
      }
      return *st.begin();
    }
};
//basixally we are creating a set and we are storing the element in the set which is not there right now, and when the same element is in the list then insteed of storing we are removing the same element so after all the insertion deletion the single element will left and at last we are printing that last set element 