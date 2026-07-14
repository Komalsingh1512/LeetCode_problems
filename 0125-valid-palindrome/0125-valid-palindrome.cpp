class Solution {
public:
 bool isValid(char ch){
                if((ch >='a' && ch <='z') ||(ch >='A' && ch <='Z') || (ch >='0' && ch <='9')){
                    return true;
                }
                return false;
            }
    bool isPalindrome(string s) {
        int left=0; 
        int n= s.length();
        int right=n-1;
        bool palindrom = true;
       
        while(left < right){
           
            if(!isValid(s[left])){
                left++;
            }
            else if(!isValid(s[right])){
                right--;
            }else{
                if(tolower(s[left]) != tolower(s[right])){
                     return false;
                }
                else{
                    left++;
                    right--;
                }
            }
        }
    return true;
    }
};