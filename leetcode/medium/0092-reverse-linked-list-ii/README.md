# Reverse Linked List II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a singly linked list and two integers `left` and `right` where `left <= right`, reverse the nodes of the list from position `left` to position `right`, and return  *the reversed list*.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]

```

 **Example 2:** 

```
Input: head = [5], left = 1, right = 1
Output: [5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= n <= 500
- -500 <= Node.val <= 500
- 1 <= left <= right <= n

 

 **Follow up:**  Could you do it in one pass?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.3 MB (beats 38.43%)  
**Submitted:** 2026-10-06T19:08:04.814Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-linked-list-ii/)