class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long dividend=0;
        vector<int>ans(word.size(),0);
        for(int i=0;i<word.size();i++){
            dividend=(dividend*10+(word[i]-'0'))%m;
            if(dividend==0)
                ans[i]=1;
        }   
        return ans;
    }
};