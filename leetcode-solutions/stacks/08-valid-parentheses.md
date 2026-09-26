## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. When a closing bracket is encountered, it is compared with the most recent opening bracket on the stack. The string is valid only when every closing bracket matches correctly and the stack is empty at the end.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

A closing bracket without a corresponding opening bracket makes the string invalid. The solution also checks that no unmatched opening brackets remain after processing the complete string.

### Test Cases

**Test Case 1:**

* Input: `"()[]{}"`
* Expected Output: `true`

**Test Case 2:**

* Input: `"(]"`
* Expected Output: `false`

### Local Testing

The program compiled successfully with GCC. Local execution was blocked by the Windows Application Control policy on the system.

### LeetCode Result

Accepted.
