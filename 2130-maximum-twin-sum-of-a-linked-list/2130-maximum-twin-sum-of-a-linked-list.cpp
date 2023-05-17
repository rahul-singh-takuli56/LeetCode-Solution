// OPTIMIZED APPROACH->
class Solution {    
public:
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int maxi=0;
        
        // find left-middle element
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode *nextnode, *prev=NULL;
        //Reverse second half linked list
        while(slow){
            nextnode=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nextnode;
        }
        
        //getting sum
        while(prev){
            maxi=max(maxi,prev->val+head->val);
            head=head->next;
            prev=prev->next;
        }
        return maxi;
    }
};