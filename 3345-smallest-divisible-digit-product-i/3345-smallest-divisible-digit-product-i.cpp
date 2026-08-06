class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int product = 1;
            int x = n;
            while (x > 0) {
                int digit = x % 10;
                product = product * digit;
                x = x / 10;
            }
            if (product % t == 0) {
                return n;
            }
            n++;
        }
    }
};