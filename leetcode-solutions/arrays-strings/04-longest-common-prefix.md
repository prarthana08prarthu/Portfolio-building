## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used the first string as the initial prefix and compared it character by character with each of the remaining strings. Whenever a mismatch was found, the prefix length was reduced. This continues until the longest common prefix shared by all strings is found.

### Complexity

* Time: O(n × m), where `n` is the number of strings and `m` is the length of the shortest relevant prefix.
* Space: O(1), excluding the returned result.

### Notes

If the strings have no characters in common, the result is an empty string. The solution also handles a single string, where the entire string is the common prefix.

### Test Cases

**Test Case 1:**

* Input: `["flower", "flow", "flight"]`
* Expected Output: `"fl"`
* Actual Output: `"fl"`

**Test Case 2:**

* Input: `["dog", "racecar", "car"]`
* Expected Output: `""`
* Actual Output: `""`

### LeetCode Result

Accepted.
