class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        ListNode* head=NULL;
        if(list1==NULL && list2==NULL)
            return head;
        while(list1!=NULL && list2!=NULL){
                ans.push_back(list1->val);
                ans.push_back(list2->val);
                list1=list1->next;
                list2=list2->next;
                 
        }
        while(list1!=NULL){
            ans.push_back(list1->val);
            list1=list1->next;
        }
        
         while(list2!=NULL){
            ans.push_back(list2->val);
            list2=list2->next;
        }
        
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<ans.size();i++){
            ListNode* newnode=new ListNode;
            newnode->val=ans[i];
            newnode->next=head;
            head=newnode;
        }
        return head;
    }
};