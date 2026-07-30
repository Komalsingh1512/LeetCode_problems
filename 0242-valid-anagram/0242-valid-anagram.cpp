class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length()) return false;

        unordered_map<char, int> mp;

        for(int charr: s){
            mp[charr]++;// it is counting the charter of s 
        }

        for(auto charr: t){// here we are traversing if the element is same as s then minus it
            mp[charr]--;
            if(mp[charr]<0) return false;// why this becaue if we are travering an element with was not in s then its value become 0 and when we minus it become -1 
        }
        return true;
    }
};