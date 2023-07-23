class Solution {
public:
    bool check(char c){
    string str="aeiouAEIOU";
        for(int i=0;i<str.size();i++){
            if(str[i]==c)
                return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char>arr;
        for(int i=0;i<s.size();i++){
            if(check(s[i]))
                arr.push_back(s[i]);
        }
        sort(arr.begin(),arr.end());
        int ptr=0;
        for(int i=0;i<s.size();i++){
            if(check(s[i]))
                s[i]=arr[ptr++];
        }
        return s;
    }
};