class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                    temp.push_back(nums1[i]);
            }
        }   
        int n=*min_element(nums1.begin(),nums1.end());
        int m=*min_element(nums2.begin(),nums2.end());
        
        if(temp.size()!=0){
            sort(temp.begin(),temp.end());
            return temp[0];    
        }
        string s="";
        if(n<m)
            s=to_string(n)+to_string(m);
        else
            s=to_string(m)+to_string(n);
        return stoi(s);
    }
};