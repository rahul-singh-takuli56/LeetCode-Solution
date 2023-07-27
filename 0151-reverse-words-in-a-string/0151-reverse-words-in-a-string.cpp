class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
        s+=" ";
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && temp!=""){
                st.push(temp);
                temp="";
            }
            else if(s[i]==' ' && temp=="")
                continue;
            else
                temp+=s[i];
        }
        string ans="";
        while(st.size()>1){
            ans+=st.top()+" ";
            st.pop();
        }
        ans+=st.top();
        return ans;
    }
};