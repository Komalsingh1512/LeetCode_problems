class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n= prices.size();
       stack<int>st;
       vector<int>ans(n);
       for(int i =n-1; i>=0; i--){
        while(!st.empty() && st.top()>prices[i]){// jab stack empty na ho or top > ho curr se to top ko remove kar denge 
        st.pop();
       }
       if(st.empty()){
        ans[i]=prices[i];// stack empty hai to usme value add kar denge 
       }else{
        ans[i]=prices[i]- st.top();
       }
       st.push(prices[i]);
       }
       return ans;
    }
};

// class Solution {
// public:
//     vector<int> finalPrices(vector<int>& prices) {
//         int n= prices.size();
//        stack<int>st;
//        vector<int>ans(n);
//        for(int i =n-1; i>=0; i--){
//         while(!st.empty() && st.top()>prices[i]){
//         st.pop();
//        }
//        if(!st.empty()){
//         ans[i]=st.top();
//        }else{
//         ans[i]=0;
//        }
//        st.push(prices[i]);
//        }
//        for(int i =0; ; i<n; i++){
//         prices[i]=  prices[i]-ans[i];
//        }
//        return ans;
//     }
// };