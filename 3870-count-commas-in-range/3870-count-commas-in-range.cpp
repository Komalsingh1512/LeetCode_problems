class Solution {
public:
    int countCommas(int n) {
        return max(n-999,0);// it is giving me the highest value eg: 1004-999 = 4 so the comma will be 4 
    }
};