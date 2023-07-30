class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>mp;
            
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;    
                for(auto it:mp){
                    maxi=max(maxi,it.second);
                    mini=min(mini,it.second);
                }
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};