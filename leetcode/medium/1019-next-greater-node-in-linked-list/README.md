# Next Greater Node In Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a linked list with `n` nodes.

For each node in the list, find the value of the  **next greater node**. That is, for each node, find the value of the first node that is next to it and has a  **strictly larger**  value than it.

Return an integer array `answer` where `answer[i]` is the value of the next greater node of the `ith` node (**1-indexed**). If the `ith` node does not have a next greater node, set `answer[i] = 0`.

 

 **Example 1:** 

```
Input: head = [2,1,5]
Output: [5,5,0]

```

 **Example 2:** 

```
Input: head = [2,7,4,3,5]
Output: [7,0,5,5,0]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= n <= 104
- 1 <= Node.val <= 109

## Solution

**Language:** C++  
**Runtime:** 916 ms (beats 5.52%)  
**Memory:** 45.5 MB (beats 74.78%)  
**Submitted:** 2026-10-13T17:44:56.435Z  

```cpp
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        for (ListNode* temp = head; temp; temp = temp->next) {
            ListNode* curr = temp->next;
            while (curr && curr->val <= temp->val) {
                curr = curr->next;
            }
            ans.push_back(curr ? curr->val : 0);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/next-greater-node-in-linked-list/)