class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        queue<pair<string, int>> q;
        unordered_set<string> st(wordList.begin(), wordList.end());
        unordered_set<string> vis;
        
        q.push({beginWord, 1});
        vis.insert(beginWord);
        
        while(!q.empty()){
            string w = q.front().first;
            int lvl = q.front().second;
            q.pop();
            if(w == endWord) return lvl;
            for(int i = 0; i < w.size(); i++){
                string temp = w;
                for(char ch = 'a'; ch <= 'z'; ch++){
                    temp[i] = ch;
                    if(st.find(temp) != st.end() && vis.find(temp) == vis.end()){
                        q.push({temp, lvl+1});
                        vis.insert(temp);
                    }
                }
            }
        }
        return 0;
    }
};