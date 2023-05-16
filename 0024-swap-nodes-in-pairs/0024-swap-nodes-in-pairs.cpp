
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      if(head==NULL)
          return NULL;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* pre=dummy;
        ListNode* first=head;
        ListNode* second=head->next;
        while(second!=NULL){
            first->next=second->next;
            second->next=first;
            pre->next=second;
            
            pre=first;
            first=first->next;
            if(first!=NULL)
                second=first->next;
            else
                break;
        }
        return dummy->next;
    }
};