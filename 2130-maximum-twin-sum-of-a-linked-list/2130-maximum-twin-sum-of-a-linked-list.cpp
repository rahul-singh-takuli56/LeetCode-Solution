class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        int maxi=0;
        int i=0,j=ans.size()-1;
        while(i<j){
            int sum=ans[i]+ans[j];
            maxi=max(maxi,sum);
            i++;
            j--;
        }
        return maxi;
    }
};