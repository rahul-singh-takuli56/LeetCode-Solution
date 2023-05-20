class Solution {
public:
    ListNode* reverse_list(ListNode* head){
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return true;
        
        // just two pointer slow wil move by 1 step
        // fast will move with two step
        ListNode* slow=head;
        ListNode* fast=head;
        
        
        //finding the left mid element
        //when fast will reach to last or second last node then at that moment we will get mid element 
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        //reversing second half of linked list 
        slow->next=reverse_list(slow->next);
        slow=slow->next;\
            
        // to check palindrome hai ke nhee 
        // by comparing first elment of first half and first element of second half and so on ....
        while(slow!=NULL){
            if(head->val!=slow->val)
                return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};