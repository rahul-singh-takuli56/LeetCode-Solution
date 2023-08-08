class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int i=0;
        int n=arr.size();
        while(i<n){
            if(target<arr[i])
                return 0;
            else if(target==arr[i])
                return i;
            else if(target>arr[n-1])
                return n;
            else if(target>arr[i] && target<arr[i+1])
                return i+1;
            i++;
        }
        return n;
    }
};