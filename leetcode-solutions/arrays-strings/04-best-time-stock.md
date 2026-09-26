## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Problem Description

Given an array of stock prices where `prices[i]` represents the price of a stock on the `i`th day, find the maximum profit that can be achieved by buying on one day and selling on a later day.

If no profit is possible, return `0`.

### Approach

I used a **single-pass approach**.

I keep track of the minimum stock price seen so far. For each price, I calculate the profit that would be obtained by selling on that day and update the maximum profit if necessary.

This ensures that the stock is always bought before it is sold.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Test Cases

**Test Case 1 — Typical case**

Input:
`[7, 1, 5, 3, 6, 4]`

Output:
`5`

**Test Case 2 — Edge case with decreasing prices**

Input:
`[7, 6, 4, 3, 1]`

Output:
`0`

### Notes

This problem helped me practice finding the minimum value while traversing an array and calculating the maximum profit in a single pass.

The solution was submitted on LeetCode and received an **Accepted** result.
