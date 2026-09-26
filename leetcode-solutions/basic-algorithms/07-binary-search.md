## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array. The middle element is compared with the target, and the search range is reduced to either the left or right half depending on the comparison.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

Binary search requires the input array to be sorted. An important detail is calculating the middle index as `left + (right - left) / 2` to avoid unnecessary integer overflow.

### Test Cases

**Test Case 1:**

* Input: `nums = [-1,0,3,5,9,12], target = 9`
* Expected Output: `4`
* Actual Output: `4`

**Test Case 2:**

* Input: `nums = [-1,0,3,5,9,12], target = 2`
* Expected Output: `-1`
* Actual Output: `-1`

### LeetCode Result

Accepted.
