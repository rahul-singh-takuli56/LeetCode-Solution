class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int>mp1,mp2;
        for(auto it:s)
            mp1[it]++;
        for(auto it:t)
            mp2[it]++;
        
        for(auto it:s){
            if(mp1[it]!=mp2[it])
                return false;
        }
        return true;
    }
};