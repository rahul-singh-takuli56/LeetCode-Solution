    class Solution {
public:
    bool is_palindrone(string &str,int start, int end){
        int n=str.size();
        while(start<end){
            if(str[start]!=str[end])
                return false;
                start++,end--;
            }
        return true;
    }
    
    string longestPalindrome(string s) {
        int start=0;
        int max_length=1;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(is_palindrone(s,i,j) && (j-i+1)>max_length){
                    start=i;
                    max_length=j-i+1;
                }
            }
        }
        return s.substr(start,max_length);
    }
};
