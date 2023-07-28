class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.length() != t.length()) return false;
       unordered_map<char,char> m;
       unordered_map<char,bool> isMapped;
       for(int i=0;i<s.length();i++){
            if(m.find(s[i]) == m.end()) {
                if(!isMapped[t[i]]){
                    m[s[i]] = t[i];
                    isMapped[t[i]] = true;
                }else return false;   
            }
            else if(m[s[i]] != t[i]) return false;
       }

       return true;
    }
};