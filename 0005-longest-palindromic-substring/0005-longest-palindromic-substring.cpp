class Solution {
public:
    bool is_palindrone(string &s,int start, int end){
        int n=s.size();
        while(start<end){
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxi=1;
        int start=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(is_palindrone(s,i,j) && (j-i+1)>maxi ){
                    start=i;
                    maxi=max(maxi,j-i+1); // (j-i+1 is the lenght of substring)
                    // cout<<start<<" "<<maxi<<" ";
                    // cout<<endl;
                }
            }
        }
        return s.substr(start,maxi);
    }
};