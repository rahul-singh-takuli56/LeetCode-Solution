class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        ListNode*head1=NULL;
        for(int i=0;i<ans.size();i++){
            ListNode* new_node=new ListNode;
            new_node->val=ans[i];
            new_node->next=head1;
            head1=new_node;
        }
        return head1;
    }
};