/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int cnt=0;
    ListNode* temp1=head;
    while(temp1)
    {
        temp1=temp1->next;
        cnt++;
    }

    int beg=cnt+1-n;
    int ctr=0;

    ListNode* temp=head;
    if(beg==1)
    {
        ListNode* del=temp;
        temp=temp->next;
        delete del;
        return temp;
    }
    while(temp)
    {
        ctr++;
        if(ctr==(beg-1))
        {
            ListNode* del=temp->next;
            temp->next=temp->next->next;
            delete del;
            break;
        }
        temp=temp->next;
    }
    return head;
    }
};