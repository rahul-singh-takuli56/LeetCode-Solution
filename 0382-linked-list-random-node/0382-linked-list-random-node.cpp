class Solution {
public:
    Solution(ListNode* head) {
        this->head = head;
        srand(time(NULL));
    }
    
    int getRandom() {
        int result = head->val;   
        ListNode* curr = head->next;
        int i = 2;
        while (curr != NULL) {
            if (rand() % i == 0) {
                result = curr->val;
            }
            curr = curr->next;
            i++;
        }
        return result;
    }

private:
    ListNode* head;
};
