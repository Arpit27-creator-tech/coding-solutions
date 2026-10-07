class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        while (head) {
            if (head->next && head->val == head->next->val) {
                int v = head->val;
                while (head && head->val == v)   
                    head = head->next;
                prev->next = head;               
            } else {
                prev = head;
                head = head->next;
            }
        }
        return dummy.next;
    }
};