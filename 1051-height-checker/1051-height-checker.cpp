class Solution {
public:
    int heightChecker(vector<int>&v1) {
        int count=0;
        vector<int>v2;
        copy(v1.begin(),v1.end(),back_inserter(v2));
        sort(v2.begin(),v2.end());
        int i=0,j=0;
        while(i<v1.size()){
            if(v1[i]!=v2[j])
                count++;
            i++;j++;
        }
        return count;
    }
};