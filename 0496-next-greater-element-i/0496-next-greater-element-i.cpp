class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int>st;
       unordered_map<int, int>mp;//we have used map because there are two array and using map we are firstly storing all the next greater value of nums2 in map then using vector we will retrive only the value that match with nums1
       for(int i =nums2.size()-1; i>=0; i--){
        while(!st.empty()  && st.top()<=nums2[i]){ //aagar stack empty nhi hai wo usme jo element hai wo chota hai top ke element se to ham usko pop kar denge top ke element ko  
            st.pop();
        }
        if(st.empty()){
            mp[nums2[i]]=-1;// ham mp me piche se value likh rahe, aagar empty hai to -1
        }else{
            mp[nums2[i]]=st.top();//empty nhi hai to jo top me value hai stack me usko mp me daal do 
        }
         st.push(nums2[i]);// we are writing this outside because we are pushing this value to the stack after checking if and else condition
       }
       vector<int>ans;
       for(int i=0; i<nums1.size();i++){
        ans.push_back(mp[nums1[i]]);// here we already know the NGE of ever element of num1 so nums1[4] is pointing to -1 in map so it will give -1;
       }
       return ans;
    }
};
