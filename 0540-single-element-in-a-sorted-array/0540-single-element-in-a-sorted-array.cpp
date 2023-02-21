class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        for(auto it:mp){
            if(it.second%2!=0)
                return it.first;
        }
        return 0;
    }
};