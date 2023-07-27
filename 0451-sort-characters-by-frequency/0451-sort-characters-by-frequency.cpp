
class Solution {
public:   
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto it:s)
            mp[it]++;
        
        auto sortbyfrq=[](pair<char,int>&a,pair<char,int>&b)->bool{
            return a.second>b.second;
        };
        
        
        vector<pair<char,int>>sorted;
        for(auto it:mp)
            sorted.push_back(it);
        
        sort(sorted.begin(),sorted.end(),sortbyfrq);
        
        string ans="";
        for(auto it:sorted){
            while(it.second>0){
                ans+=it.first;
                it.second--;
            }
        }
        return ans;
    }
};