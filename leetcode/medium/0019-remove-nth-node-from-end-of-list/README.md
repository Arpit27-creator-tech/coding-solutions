# Remove Nth Node From End of List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

```

 **Example 2:** 

```
Input: head = [1], n = 1
Output: []

```

 **Example 3:** 

```
Input: head = [1,2], n = 1
Output: [1]

```

 

 **Constraints:** 

- The number of nodes in the list is sz.
- 1 <= sz <= 30
- 0 <= Node.val <= 100
- 1 <= n <= sz

 

 **Follow up:**  Could you do this in one pass?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15 MB (beats 25.57%)  
**Submitted:** 2026-10-08T16:50:39.448Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)