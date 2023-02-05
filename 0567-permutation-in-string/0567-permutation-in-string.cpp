class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        int k=s1.size();
        int i=0,j=0;
        vector<int>fs1(26,0);
        vector<int>fs2(26,0);
        for(int i=0;i<k;i++){
            fs1[s1[i]-'a']++;
            fs2[s2[i]-'a']++;
        }
        if(fs1==fs2)
            return true;
        for(int i=k;i<s2.size();i++){
            fs2[s2[i-k]-'a']--;
            fs2[s2[i]-'a']++;
            if(fs1==fs2)
                return true;
        }
        return false;
    }
};