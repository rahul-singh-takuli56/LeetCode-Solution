class Solution {
public:
    int tribonacci(int n) {
        vector<unsigned int>arr{0,1,1};
        if(n<arr.size())
            return arr[n];
        for(int i=2;i<=n;i++){
            arr.push_back(arr[i]+arr[i-1]+arr[i-2]);
        }
        return arr[n];
    }
};