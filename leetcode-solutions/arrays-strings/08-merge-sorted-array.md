## Problem: Merge Sorted Array (Easy)

**Link:** https://leetcode.com/problems/merge-sorted-array/

### Problem Description

Given two sorted integer arrays, merge the second array into the first array in sorted order.

The first array has enough space to hold all elements from both arrays.

### Approach

I used a **three-pointer approach starting from the end of the arrays**.

* `i` points to the last valid element in `nums1`.
* `j` points to the last element in `nums2`.
* `k` points to the last available position in `nums1`.

I compare the elements from the end and place the larger element at position `k`. This avoids overwriting elements that still need to be processed.

After the main loop, any remaining elements from `nums2` are copied into `nums1`.

### Complexity

* **Time:** O(m + n)
* **Space:** O(1)

### Test Cases

**Test Case 1 — Typical case**

Input:

`nums1 = [1, 2, 3, 0, 0, 0]`

`nums2 = [2, 5, 6]`

Output:

`[1, 2, 2, 3, 5, 6]`

**Test Case 2 — Edge case where nums2 is empty**

Input:

`nums1 = [1]`

`nums2 = []`

Output:

`[1]`

### Notes

This problem helped me practice in-place array manipulation and the three-pointer technique.

The solution was submitted on LeetCode and received an **Accepted** result.
