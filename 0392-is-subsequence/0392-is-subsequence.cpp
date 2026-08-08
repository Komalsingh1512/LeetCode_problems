class Solution {
public:
bool solve (int i, int j, string &s, string &t){
    if(i ==s.size()){ //hame i ki value match karni hai to jab tak size pura nhi hota tab tab check karenge 
            return true;
        }
        if(j==t.size()){// aagar j v size tak chalega to wo pura nhi dhundh payega.. wo ab tak hi reh jayega c ke time tak size khatam ho jayegi
            return false;
        }
        if(s[i] == t[j]){
            return solve(i+1, j+1, s, t);
        }
        return solve(i, j+1, s,t);
}
    bool isSubsequence(string s, string t) {
        return solve(0,0,s,t);
    }
};