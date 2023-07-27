class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        s+=s;
        int pos=s.find(goal);
        if(pos!=string::npos)
            return true;
        return false;
    }
};