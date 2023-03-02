class Solution {
public:
    //optimized solution
    int numJewelsInStones(string J, string S) {
    int count = 0;
    for (char s : S) {
        if (J.find(s) != string::npos) {
            ++count;
        }
    }
    return count;
    }
};