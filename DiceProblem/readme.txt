Sure, here's a more concise version of the algorithm:

1. Input: Target sum `n`.
2. Process: For each `i` from `1` to `n`, add ways to get sum `i-x` for each dice outcome `x` from `1` to `6`.
3. Output: Number of ways to construct sum `n`.

This algorithm calculates the number of ways to reach a sum `n` by throwing a dice,
 with time and space complexity `O(n)`. 
 The number of ways is calculated modulo `10^9 + 7` to prevent overflow.