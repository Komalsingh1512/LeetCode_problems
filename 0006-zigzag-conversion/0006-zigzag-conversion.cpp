class Solution {
public:
    string convert(string s, int numRows) {
        int size = s.size();
        if (numRows == 1 || size < numRows) return s;

        int patternSize = 2 * numRows - 2;
        int patterns = (patternSize)? size / patternSize : 0;
        int patternsSize = patternSize * patterns;
        if (size - patternsSize) patternsSize += patternSize;

        string solution = "";
        for (int i = 0; i < numRows; i ++) {
            solution += s[i];
            for (int j = patternSize; j <= patternsSize; j += patternSize) {
                if (i != 0 && i != numRows - 1 && j - i < size) 
                    solution += s[j - i];
                if (j + i < size) solution += s[j + i];
            }
        }
        return solution;
    }
};