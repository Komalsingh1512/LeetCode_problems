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
//ham pichle se chal rahe qki hamen next element pucha hai, starting me hamra stack empti hai to ham mp me 2 is falu rakhnge or 2 ko stack me daal denge aab stack khali nhi hai to ham num2 ke dusre elemnt jo is 4 hai uske sat ke top element ke compare karenge aahr st ka element bara nhi hau to ham usko pop out kar denge or aab first se st empty ho gaya to map me 4 ke next me -1 rakh denge, or 4 ko stack me add kar dnge, aab num2 ka next element 3 ko 4 se compar karenge karenge 4 bara hai to ham mp me 3 ke next element 4 ko map me rakh denge, or 3 ko stack me 

