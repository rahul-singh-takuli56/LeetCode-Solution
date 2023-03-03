class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i=0,j=0;
        while(i<n and j<m){
            if(haystack[i]==needle[j]){
                j++;
                if(j==m){
                    return i - m + 1;
                }
            }
            else {
                i = i - j;
                j = 0;
            }
            i++;
        }
        return -1;
    }
};
