class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        string temp = "";

        // Extract words and push into stack
        for(char c : s){

            if(c != ' '){
                temp += c;// it will store first word in the temp
            }
            else{

                if(!temp.empty()){// when the space comes it temp value will be stored in stack and temp become null
                    st.push(temp);
                    temp = "";
                }
            }
        }

        // Push last word
        if(!temp.empty()){// at last the last word is stored in temp not in stack because it is not have space at last that why we are adding it here in stack
            st.push(temp);
        }

        // Pop and build answer
        string ans = "";

        while(!st.empty()){

            ans += st.top();
            st.pop();

            if(!st.empty()){
                ans += " ";
            }
        }

        return ans;
    }
};
//The stack solution works on the Last In, First Out (LIFO) principle. First, we traverse the given string character by character and create each word using a temporary string (temp). Whenever we encounter a space, we check if temp is not empty. If it contains a word, we push that word into the stack and clear temp to start forming the next word. This also helps us ignore multiple consecutive spaces because we only push non-empty words. After the traversal is complete, the last word may still be stored in temp (since the string might not end with a space), so we push it into the stack as well.