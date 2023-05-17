class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *newhead=NULL;
        while(head!=NULL){
            ListNode *nextnode=head->next;
            head->next=newhead;
            newhead=head;
            head=nextnode;
        }
        return newhead; 
    }
};