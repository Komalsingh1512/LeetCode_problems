class Solution {
public:

    bool solve(string &s, int left, int right){

        // Base Case
        if(left >= right)
            return true;

        // Skip non-alphanumeric characters
        if(!isalnum(s[left]))
            return solve(s, left + 1, right);

        if(!isalnum(s[right]))
            return solve(s, left, right - 1);

        // Compare ignoring case
        if(tolower(s[left]) != tolower(s[right]))
            return false;

        return solve(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {

        return solve(s,0,s.size()-1);

    }
};