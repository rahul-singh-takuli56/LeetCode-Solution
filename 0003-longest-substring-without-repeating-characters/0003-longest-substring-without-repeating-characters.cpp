class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,maxi=0;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            while(mp[s[j]]>1)
                mp[s[i++]]--;
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};