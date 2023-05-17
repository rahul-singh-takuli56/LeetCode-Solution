class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        int sum = 0;

        while (head != nullptr) {
            sum += head->val;
            if (head->val == 0){
                ans.push_back(sum);
                sum=0;
            }
            head = head->next; 
        }

        ListNode* head1 = nullptr;
        ListNode* current = nullptr;

        for (int i = 1; i < ans.size(); i++) {
            ListNode* newNode = new ListNode(ans[i]);

            if (head1 == nullptr) {
                head1 = newNode;
                current = newNode;
            } else {
                current->next = newNode;
                current = newNode;
            }
        }

        return head1;
    }
};
