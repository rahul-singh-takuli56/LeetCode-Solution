class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        vector<int>temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;    
        }
        
        reverse(temp.begin(),temp.end());
        int carry=0;
        for(int i=0;i<temp.size();i++){
            int val=carry+temp[i]*2;
            temp[i]=val%10;
            carry=val/10;
        }
        
        while(carry>0){
            temp.push_back(carry%10);
            carry/=10;
        }
        reverse(temp.begin(),temp.end());
        ListNode* ans=new ListNode(temp[0]);
        ListNode*newhead=ans;
        for(int i=1;i<temp.size();i++){
            ListNode* curr= new ListNode(temp[i]);
            ans->next=curr;
            ans=curr;
        }
         return newhead;                                                                    
    }
};