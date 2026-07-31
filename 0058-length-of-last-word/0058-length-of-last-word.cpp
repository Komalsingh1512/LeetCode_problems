class Solution {
public:
    int lengthOfLastWord(string s) {
        int start=0; //no need of this line as we are not using it anywhere
        int n = s.length();
        int end=n-1;
        while(end >=0 && s[end]==' ') end--; // if the last word have any space still it will count that word
        int count =0;
        while(end>=0 && s[end] !=' '){// this line will print only when the last word donot have any space for this problem we are declaring one while loop before thsi while loop
            count++;
            end--;
        }
        return count;
    }
};