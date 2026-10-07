# Remove Duplicates from Sorted List II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a  **sorted**  linked list.

Delete all nodes that have  **duplicate**  numbers, leaving only  **distinct**  numbers from the original list.

Return the linked list  **sorted**  as well.

 

 **Example 1:** 

```
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

```

 **Example 2:** 

```
Input: head = [1,1,1,2,3]
Output: [2,3]

```

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 300].
- -100 <= Node.val <= 100
- The list is guaranteed to be sorted in ascending order.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.7 MB (beats 76.12%)  
**Submitted:** 2026-10-07T17:16:42.304Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)