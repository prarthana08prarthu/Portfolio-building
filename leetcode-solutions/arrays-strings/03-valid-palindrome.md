## Problem: Valid Palindrome (Easy)

**Link:** https://leetcode.com/problems/valid-palindrome/

### Problem Description

Given a string, determine whether it is a palindrome after converting uppercase letters to lowercase and removing all non-alphanumeric characters.

### Approach

I used a **two-pointer approach**.

* One pointer starts from the beginning of the string.
* Another pointer starts from the end.
* Non-alphanumeric characters are skipped.
* The characters at both pointers are converted to lowercase and compared.
* If they are different, the string is not a palindrome.
* If all valid characters match, the string is a palindrome.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Test Cases

**Test Case 1 — Typical case**

Input:
`"A man, a plan, a canal: Panama"`

Output:
`true`

**Test Case 2 — Non-palindrome case**

Input:
`"race a car"`

Output:
`false`

### Notes

This problem helped me practice the two-pointer technique, character checking using `isalnum()`, and case conversion using `tolower()`.

The solution was submitted on LeetCode and received an **Accepted** result.
