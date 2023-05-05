class Solution {
public:
    int longestContinuousSubstring(string s) {
        int cur_len=1;
        int max_len=1;
        for(int i=1;i<s.size();i++){
                if(s[i]==s[i-1]+1){
                    cur_len++;
                    max_len=max(max_len,cur_len);
                }
                else
                    cur_len=1;
        }
        return max_len;
    }
};