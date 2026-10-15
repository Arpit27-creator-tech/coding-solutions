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
**Runtime:** 1 ms (beats 11.53%)  
**Memory:** 7.7 MB (beats 98.50%)  
**Submitted:** 2026-10-15T16:51:36.561Z  

```cpp
class Solution {
public:
    bool consecutiveSetBits(int n) {
        int pairs = 0;
        while (n > 0) {
            if ((n & 3) == 3) pairs++;  
            n >>= 1;
        }
        return pairs == 1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/)