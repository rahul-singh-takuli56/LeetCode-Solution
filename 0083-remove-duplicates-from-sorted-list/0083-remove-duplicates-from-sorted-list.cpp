class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode*curr=head;
        while(curr->next!=NULL){
            if(curr->val==curr->next->val){
                ListNode*temp=curr->next;
                curr->next=temp->next;
                delete temp;
            }
            else
                curr=curr->next;
        }
        return head;
    }
};