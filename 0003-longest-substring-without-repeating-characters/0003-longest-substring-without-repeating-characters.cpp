class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        unordered_map<char,int>mp;
        int n=s.size();
        int i=0,j=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[i]]--;
                mp.erase(s[i]);
                i++;
            }
            else{
                mp[s[j]]++;
                maxi=max(maxi,j-i+1);
                j++;
            }
        }
        return maxi;
    }
};