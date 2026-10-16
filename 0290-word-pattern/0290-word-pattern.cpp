class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        vector<string> words;
        string word;
        stringstream ss(s);//a scanner that read word by word ... hader file is #include <sstream>
        while (ss >> word) {
            words.push_back(word);//this line will store one single word... dog..and likewise other words will also store in the vectore one by one 
        }
        if (pattern.size() != words.size())// this will check is both patter and s both have 4 size or not
            return false;

        for (int i = 0; i < pattern.size(); i++) {

            if (mp1.count(pattern[i]) && mp1[pattern[i]] != words[i])
                return false;
                //herew we are checking that "If the character already exists in the map AND its previously assigned word is different from the current word, return false."

            if (mp2.count(words[i]) && mp2[words[i]] != pattern[i])
                return false;

            mp1[pattern[i]] = words[i];//here first letter is assing to first word 
            mp2[words[i]] = pattern[i];//here first word is assing to first letter 
        }

        return true;
    }
};