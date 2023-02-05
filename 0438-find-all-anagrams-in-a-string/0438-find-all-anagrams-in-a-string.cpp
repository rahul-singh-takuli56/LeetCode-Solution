class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>fs(26,0);
        vector<int>fp(26,0);
        int k=p.size();
        if(s.size()<p.size())
            return ans;
        for(int i=0;i<k;i++){
            fs[s[i]-'a']++;
            fp[p[i]-'a']++;
        }
        if(fs==fp)
           ans.push_back(0);
        for(int i=k;i<s.size();i++){
            fs[s[i-k]-'a']--;
            fs[s[i]-'a']++;
            if(fs==fp)
                ans.push_back(i-k+1);
        }
        return ans;
    }
};