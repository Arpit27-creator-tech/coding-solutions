# Long Pressed Name

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Your friend is typing his `name` into a keyboard. Sometimes, when typing a character `c`, the key might get  *long pressed*, and the character will be typed 1 or more times.

You examine the `typed` characters of the keyboard. Return `True` if it is possible that it was your friends name, with some characters (possibly none) being long pressed.

 

 **Example 1:** 

```
Input: name = "alex", typed = "aaleex"
Output: true
Explanation: 'a' and 'e' in 'alex' were long pressed.

```

 **Example 2:** 

```
Input: name = "saeed", typed = "ssaaedd"
Output: false
Explanation: 'e' must have been pressed twice, but it was not in the typed output.

```

 

 **Constraints:** 

- 1 <= name.length, typed.length <= 1000
- name and typed consist of only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.5 MB (beats 95.95%)  
**Submitted:** 2026-10-06T19:30:35.619Z  

```cpp
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        for (int j = 0; j < typed.size(); j++) {
            if (i < name.size() && name[i] == typed[j]) {
                i++;                      
            } else if (j == 0 || typed[j] != typed[j - 1]) {
                return false;             
            }
        }
        return i == name.size();         
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/long-pressed-name/)