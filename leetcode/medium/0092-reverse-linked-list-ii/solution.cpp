class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0, head);
        ListNode* start = &dummy;

        
        for (int i = 1; i < left; i++) start = start->next;

        ListNode* curr = start->next;   
        ListNode* prev = nullptr;

        
        for (int i = 0; i < right - left + 1; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        
        start->next->next = curr;  
        start->next = prev;        

        return dummy.next;
    }
};