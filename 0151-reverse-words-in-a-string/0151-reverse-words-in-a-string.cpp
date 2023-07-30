class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        s+=" ";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(ans.empty() && s[i]==' '){
                    continue;
            }
            else if(!ans.empty() && s[i]==' '){
                st.push(ans);
                ans.clear();
            }
            else
                ans+=s[i];
        }
        
        string str="";
        while(st.size()>1){
            str+=st.top()+" ";
            st.pop();
        }
        str+=st.top();
        return str;
    }
};