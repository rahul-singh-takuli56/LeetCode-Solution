class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return  head;
        ListNode* dummy=new ListNode();
        ListNode* pre=dummy;
        ListNode* curr=head;
        
        while(curr && curr->next){
            pre->next=curr->next;
            curr->next=pre->next->next;
            pre->next->next=curr;
            pre=curr;
            curr=curr->next;
        }
        return dummy->next;
    }
};