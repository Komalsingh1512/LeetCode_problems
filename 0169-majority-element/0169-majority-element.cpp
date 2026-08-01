class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(auto num: nums){
            mp[num]++;// it will store the frequency of the numbers 
        }
        for( auto it: mp){
            if(it.second>n/2){// first and second is the key and value, if the value means freq is greater we are returning its first value 
                return it.first;
            }
        }
        return -1;
    }
};