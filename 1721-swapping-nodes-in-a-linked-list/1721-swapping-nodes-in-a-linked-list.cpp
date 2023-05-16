class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> a;
        ListNode* temp=head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;

        }
        ListNode *h=NULL, *t=NULL;
        swap(a[k-1],a[a.size()-k]);
        ListNode* ans=new ListNode();
        for(int i=0;i<a.size();i++){
            ans->val=a[i];
            if(h==NULL){
                h=ans;
                t=ans;
            }
            else{
                t->next=ans;
                t=ans;
            }
            ans=new ListNode();
        }
        return h;
    }
};