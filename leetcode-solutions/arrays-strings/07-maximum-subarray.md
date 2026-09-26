## Problem: Maximum Subarray (Medium)

**Link:** https://leetcode.com/problems/maximum-subarray/

### Problem Description

Given an integer array, find the contiguous subarray with the largest sum and return its sum.

### Approach

I used **Kadane's Algorithm**.

I maintain two variables:

* `currentSum` stores the maximum sum of a subarray ending at the current position.
* `maxSum` stores the maximum subarray sum found so far.

For each element, I decide whether to extend the current subarray or start a new subarray from the current element.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Test Cases

**Test Case 1 — Typical case**

Input:
`[-2, 1, -3, 4, -1, 2, 1, -5, 4]`

Output:
`6`

**Test Case 2 — Edge case with a single element**

Input:
`[1]`

Output:
`1`

### Notes

This problem helped me understand Kadane's Algorithm for finding the maximum sum of a contiguous subarray efficiently.

The solution was submitted on LeetCode and received an **Accepted** result.
