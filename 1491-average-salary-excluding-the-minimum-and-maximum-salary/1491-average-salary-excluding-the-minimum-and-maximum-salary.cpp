class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        float sum=0;
        for(int i=1;i<salary.size()-1;i++){
            sum+=salary[i];
        }
        return sum/double(salary.size()-2);
    }
};