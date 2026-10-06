class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next || left==right) return head;

        ListNode dummy(0, head);
        ListNode* temp=&dummy;
        ListNode* start=NULL;
        int ind=0;

        while(ind < left-1)
        {
            temp=temp->next;
            ind++;
        }
        start=temp;                       

        while(ind < right)
        {
            temp=temp->next;
            ind++;
        }
        ListNode* stop=temp->next;        
        ListNode* prev=stop;

        ListNode* curr=start->next;
        while(curr!=stop)                 
        {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        start->next=prev;                 

        return dummy.next;
    }
};