class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        int store=0;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]<m[s[i+1]])
                store-=m[s[i]];
            else
                store+=m[s[i]];
        }
     return store;
    }
};