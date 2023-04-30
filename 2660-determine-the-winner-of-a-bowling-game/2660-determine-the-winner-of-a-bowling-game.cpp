class Solution {
public:
    int isWinner(vector<int>& a, vector<int>& b) {
        int sum1=0,sum2=0;
        if(a.size()==1){
             if(a[0]>b[0]) return 1;
             else if(a[0]<b[0]) return 2;
             else if(a[0]==b[0]) return 0;
        }
        if(a[0]==10)
            sum1=a[0]+2*a[1];
        else
            sum1=a[0]+a[1];
        if(b[0]==10)
            sum2=b[0]+2*b[1];
        else
            sum2=b[0]+b[1];
            
        for(int j=2;j<a.size();j++){
        if(a[j-1]==10 || a[j-2]==10)
                sum1+=2*a[j];
            else
                sum1+=a[j];
        }
        for(int i=2;i<b.size();i++){
        if(b[i-1]==10 || b[i-2]==10)
                sum2+=2*b[i];
            else
                sum2+=b[i];
        }
            
        if(sum1>sum2)
            return 1;
        else if(sum1<sum2)
            return 2;
        else 
            return 0;
    }
};