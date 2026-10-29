# SUBSCRIBE_ - Rating 504

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Subscriptions

A new TV streaming service was recently started in Chefland called the Chef-TV.

A group of $N$ friends in Chefland want to buy Chef-TV subscriptions. We know that $6$ people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is $X$ rupees. Determine the minimum total cost that the group of $N$ friends will incur so that everyone in the group is able to use Chef-TV.

### Input Format
- The first line contains a single integer $T$ — the number of test cases. Then the test cases follow.
- The first and only line of each test case contains two integers $N$ and $X$ — the size of the group of friends and the cost of one subscription.
### Output Format

For each test case, output the minimum total cost that the group will incur so that everyone in the group is able to use Chef-TV.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 100$
- $1 \le X \le 1000$
### Sample 1:
Input
Output

```
3
1 100
12 250
16 135

```

```
100
500
405

```

### Explanation:
- Test case 1: There is only one person in the group. Therefore he will have to buy $1$ subscription. Therefore the total cost incurred is $100$.
- Test case 2: There are $12$ people in the group. Therefore they will have to buy $2$ subscriptions. Therefore the total cost incurred is $500$.
- Test case 3: There are $16$ people in the group. Therefore they will have to buy $3$ subscriptions. Therefore the total cost incurred is $405$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:56:59.589Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    // Calculate the number of subscriptions needed (ceil(n / 6))
    int subscriptions = (n + 5) / 6;
    
    // Total cost is subscriptions * cost per subscription
    cout << subscriptions * x << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SUBSCRIBE_)