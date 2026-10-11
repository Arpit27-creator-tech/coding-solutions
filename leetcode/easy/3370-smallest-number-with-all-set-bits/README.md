# Smallest Number With All Set Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a  *positive*  number `n`.

Return the  **smallest**  number `x`  **greater than**  or  **equal to**  `n`, such that the binary representation of `x` contains only set bits

 

 **Example 1:** 

 **Input:**  n = 5

 **Output:**  7

 **Explanation:** 

The binary representation of 7 is `"111"`.

 **Example 2:** 

 **Input:**  n = 10

 **Output:**  15

 **Explanation:** 

The binary representation of 15 is `"1111"`.

 **Example 3:** 

 **Input:**  n = 3

 **Output:**  3

 **Explanation:** 

The binary representation of 3 is `"11"`.

 

 **Constraints:** 

- 1 <= n <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 88.53%)  
**Submitted:** 2026-10-11T09:00:17.596Z  

```cpp
class Solution {
public:
    int smallestNumber(int n) {
        int num=1;
        while(num<=n)
        {
            num*=2;
        }
        return num-1;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-number-with-all-set-bits/)