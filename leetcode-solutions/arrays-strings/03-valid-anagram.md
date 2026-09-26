## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting array of size 26 to count the occurrences of each lowercase letter. I increment the count for every character in the first string and decrement it for every character in the second string. If all counts become zero, the two strings are anagrams.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The two strings must contain the same number of each character to be anagrams. I also check the character frequencies rather than sorting the strings, which gives a linear-time solution for lowercase English letters.

### Test Cases

**Test Case 1:**

* Input: `s = "anagram", t = "nagaram"`
* Expected Output: `true`
* Actual Output: `true`

**Test Case 2:**

* Input: `s = "rat", t = "car"`
* Expected Output: `false`
* Actual Output: `false`

### LeetCode Result

Accepted.
