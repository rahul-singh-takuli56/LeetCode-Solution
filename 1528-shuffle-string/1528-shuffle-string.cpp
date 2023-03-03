class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // better code than previous
        string copy=s;
        for(int i=0;i<s.size();i++){
            copy[indices[i]]=s[i];
        }
        return copy;
    }
};