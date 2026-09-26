## Problem: Contains Duplicate (Easy)

**Link:** https://leetcode.com/problems/contains-duplicate/

### Problem Description

Given an integer array, determine whether any value appears at least twice in the array.

Return `true` if any duplicate value exists; otherwise, return `false`.

### Approach

I used a **sorting-based approach**.

First, I sort the array using `qsort()`. After sorting, duplicate values will appear next to each other. I then traverse the sorted array and compare each element with the previous element.

If two adjacent elements are equal, a duplicate exists.

### Complexity

* **Time:** O(n log n)
* **Space:** O(log n) approximately due to the sorting implementation

### Test Cases

**Test Case 1 — Duplicate exists**

Input:
`[1, 2, 3, 1]`

Output:
`true`

**Test Case 2 — No duplicate**

Input:
`[1, 2, 3, 4]`

Output:
`false`

### Notes

The initial brute-force O(n²) approach resulted in a **Time Limit Exceeded** error on LeetCode. I improved the solution by using sorting, reducing the time complexity to O(n log n).

The optimized solution was submitted on LeetCode and received an **Accepted** result.
