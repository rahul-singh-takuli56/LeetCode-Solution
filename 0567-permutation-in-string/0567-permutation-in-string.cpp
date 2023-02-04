class Solution {
public:
        bool check(vector<int>a,vector<int>b){
            for(int i=0;i<26;i++){
                if(a[i]!=b[i])
                    return false;
            }
            return true;
        }
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        vector<int>frq1(26,0),frq2(26,0);
        for(auto it:s1)
            frq1[it-'a']++;
        int i=0,j=0,k=s1.size();
        while(j<s2.size()){
            frq2[s2[j]-'a']++;
            if(j-i+1==k){
                if(check(frq1,frq2))
                    return true;
            }
            
            if(j-i+1<k)
                j++;
           
            else{
                frq2[s2[i]-'a']--;
                i++;j++;
            }
        }
        return false;
    }
};
