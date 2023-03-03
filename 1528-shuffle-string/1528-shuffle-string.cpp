class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<char, int>> arr;
        string str="";
        for(int i=0;i<s.size();i++){
            arr.push_back({s[i],indices[i]});
        }
        sort(arr.begin(), arr.end(), [](auto& p1, auto& p2) {
            return p1.second < p2.second;
        });
        for(int i=0;i<arr.size();i++){
            str += arr[i].first;
        }
        return str;
    }
};
