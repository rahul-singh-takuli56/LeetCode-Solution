class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        
        for(auto it:s){
            if(it=='('){
                if(count>0)
                    ans+='(';
                count++;
            }
            else{
                if(count>1)
                    ans+=')';
                count--;
            }
        }
        return ans;
    }
};