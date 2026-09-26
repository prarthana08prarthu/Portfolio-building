## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used an iterative three-pointer technique with `prev`, `current`, and `nextNode`. For each node, I reverse its `next` pointer to point to the previous node, then move the pointers forward until the entire linked list is reversed.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The solution handles both a normal linked list and a single-node list. A `NULL` head is also handled naturally because the loop does not execute.

### Test Cases

**Test Case 1:**

* Input: `1 -> 2 -> 3 -> 4 -> 5`
* Expected Output: `5 -> 4 -> 3 -> 2 -> 1`
* Actual Output: `5 -> 4 -> 3 -> 2 -> 1`

**Test Case 2:**

* Input: `42`
* Expected Output: `42`
* Actual Output: `42`

### LeetCode Result

Accepted.

### Activity Note

Reverse Linked List was completed as the bonus linked-list problem specified in the Activity 4 instructions.
