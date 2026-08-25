class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else{
                if(st.empty())
                    return false;// aagar stack empty hai to false hoga, q qki hamm ),},] check karenge to iske opening brackets nhi honge 
                    char top= st.top();// aab ham pehle bracket ko top me daal denge or usse closing bracket ko check karenge 
                    st.pop();
                    if((ch ==')' && top !='(')||(ch =='}' && top !='{')||(ch ==']' && top !='[')){
                        return false;
                    }
            }
        }
        return st.empty();
    }
};
