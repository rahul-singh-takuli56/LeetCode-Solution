class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<int,char>>st; // int for frq of char and char for character
        st.push({1,'*'}); // dummy pair
        
        for(int i=0;i<s.size();i++){
            if(st.top().second!=s[i])
                st.push({1,s[i]});
            else{
                if(st.top().first+1==k)
                    st.pop();
                else
                    st.top().first++;
            }
        }
        
        string ans="";
        while(st.size()>1){ // i dont want dummy pair
            for(int i=0;i<st.top().first;i++){
                ans+=st.top().second;
            }
            st.pop();
        } 
        reverse(ans.begin(),ans.end());
        return ans;
            
    }
};