## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Problem Description

Given an integer array, move all zeroes to the end while maintaining the relative order of the non-zero elements.

### Approach

I used a **two-pointer approach**.

A `position` variable keeps track of the next position where a non-zero element should be placed. I scan the array and move every non-zero element toward the front. After all non-zero elements have been placed, the remaining positions are filled with zeroes.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Test Cases

**Test Case 1 — Typical case**

Input:
`[0, 1, 0, 3, 12]`

Output:
`[1, 3, 12, 0, 0]`

**Test Case 2 — Edge case**

Input:
`[0, 0, 0]`

Output:
`[0, 0, 0]`

### Notes

This problem helped me practice in-place array manipulation and the two-pointer technique.

The solution was submitted on LeetCode and received an **Accepted** result.
