class Solution {
public:
    int largestInteger(int num) {
        string str=to_string(num);
        for(int i=0;i<str.size();i++){
            for(int j=0;j<str.size();j++){
                if(str[i]>str[j] && (str[i]%2==0 && str[j]%2==0)){
                   swap(str[j],str[i]);
                }
                else if(str[i]>str[j] && (str[i]%2!=0 && str[j]%2!=0)){
                    swap(str[j],str[i]);
                }
            }
        }
        return stoi(str);
    }
};