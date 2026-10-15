# Exactly One Consecutive Set Bits Pair

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`.

Return `true` if its binary representation contains  **exactly one adjacent pair**  of set bits, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  n = 6

 **Output:**  true

 **Explanation:** 

- Binary representation of 6 is 110.
- There is exactly one adjacent pair of set bits ("11"). Thus, the answer is true​​​​​​​.

 **Example 2:** 

 **Input:**  n = 5

 **Output:**  false

 **Explanation:** 

- Binary representation of 5 is 101.
- There is no adjacent pair of set bits. Thus, the answer is false​​​​​​​.

 

 **Constraints:** 

- 0 <= n <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.9 MB (beats 54.14%)  
**Submitted:** 2026-10-15T16:52:02.062Z  

```cpp
class Solution {
public:
    bool consecutiveSetBits(int n) {
        int x = n & (n >> 1);
        return x != 0 && (x & (x - 1)) == 0;  
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/)