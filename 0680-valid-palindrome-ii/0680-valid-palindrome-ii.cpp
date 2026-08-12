class Solution {
public:
 bool check( string &s, int left, int right){
       while(left <right){ // here we have define the main algo that should be used 
        if(s[left] !=s[right]){
            return false;
        }left++;
        right--;
       } 
       return true;
    }
    bool validPalindrome(string s) {
       int left =0; // here we are calling that function
       int n = s.length();
       int right= n-1;
       while(left <right){
        if(s[left] !=s[right]){
            return check(s, left+1, right) || check(s, left, right-1);// here we are allowed to delet one charcter so either we are deleting b then we will move l++ or deleting c we will move r--
        }left++;
        right--;
       } 
       return true;
    }
};