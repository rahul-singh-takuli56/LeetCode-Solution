class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        stack<string>st;
        s=s+" "; // at the end of string add space to reverse it;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && temp!=""){
                st.push(temp);
                temp="";
  
            }
            else if(s[i]==' ' && temp==""){
                continue;
            }
            else
                temp+=s[i];
        }
        
        //poping the string from stack
        string str="";
       while(st.size()>1){
            str=str+st.top()+" ";
            st.pop();
        }
        str+=st.top();
        return str;
    }
};