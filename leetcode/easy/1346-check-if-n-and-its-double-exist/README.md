# Check If N and Its Double Exist

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `arr` of integers, check if there exist two indices `i` and `j` such that :

- i != j
- 0 <= i, j < arr.length
- arr[i] == 2 * arr[j]

 

 **Example 1:** 

```
Input: arr = [10,2,5,3]
Output: true
Explanation: For i = 0 and j = 2, arr[i] == 10 == 2  *5 == 2*  arr[j]

```

 **Example 2:** 

```
Input: arr = [3,1,7,11]
Output: false
Explanation: There is no i and j that satisfy the conditions.

```

 

 **Constraints:** 

- 2 <= arr.length <= 500
- -103 <= arr[i] <= 103

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.9 MB (beats 36.01%)  
**Submitted:** 2026-10-12T07:46:44.235Z  

```cpp
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        for (int i = 0; i < arr.size(); i++) {
            if (seen.count(2 * arr[i]) ||
                (arr[i] % 2 == 0 && seen.count(arr[i] / 2))) {
                return true;
            }
            seen.insert(arr[i]);
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/check-if-n-and-its-double-exist/)