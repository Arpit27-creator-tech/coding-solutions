# Next Greater Element II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a circular integer array `nums` (i.e., the next element of `nums[nums.length - 1]` is `nums[0]`), return  *the  **next greater number**  for every element in*  `nums`.

The  **next greater number**  of a number `x` is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return `-1` for this number.

 

 **Example 1:** 

```
Input: nums = [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number. 
The second 1's next greater number needs to search circularly, which is also 2.

```

 **Example 2:** 

```
Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 171 ms (beats 5.07%)  
**Memory:** 27.6 MB (beats 99.98%)  
**Submitted:** 2026-10-09T18:27:46.882Z  

```cpp
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++)
        {
            int j=i;
            int num=nums[i];
            int n=nums.size();
            while(n>0)
            {
                j=j%nums.size();
                if(nums[j]>nums[i]) 
                {
                    ans[i]=nums[j];
                    break;
                }
                j++;
                n--;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/next-greater-element-ii/)