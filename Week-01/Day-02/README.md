# Day 2

## Problem

**Richest Customer Wealth**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Matrix (2D Array)

---

## Approach

- Iterate through each customer's accounts.
- Calculate the total wealth by summing all the balances in that customer's row.
- Compare the current customer's wealth with the maximum wealth found so far.
- Return the highest wealth after checking all customers.

---

## Algorithm

1. Initialize `maximumWealth` to `0`.
2. Traverse each row of the 2D array.
3. For each customer, calculate the sum of all account balances.
4. Update `maximumWealth` if the current customer's wealth is greater.
5. Return `maximumWealth`.

---

## Complexity Analysis

- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(1)`

> Where `m` is the number of customers and `n` is the number of accounts per customer.

---

## Concepts Learned

- 2D Array Traversal
- Nested Loops
- Accumulating Values
- Finding the Maximum Value

---

## Learning Notes

Today I learned how to traverse a 2D array using nested loops and calculate the sum of each row independently. This problem reinforced the importance of resetting variables correctly while processing multiple rows and tracking the maximum value efficiently.

---

## Status

✅ Solved
