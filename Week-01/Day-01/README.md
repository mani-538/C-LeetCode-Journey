# Day 1

## Problem

**Find the Highest Altitude**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Prefix Sum (Running Sum)

---

## Approach

- Start with an initial altitude of **0**.
- Traverse the `gain` array while maintaining the current altitude.
- After each step, update the highest altitude reached so far.
- Return the maximum altitude.

---

## Algorithm

1. Initialize:
   - `currentAltitude = 0`
   - `highestAltitude = 0`

2. Iterate through the `gain` array.
3. Add the current gain to `currentAltitude`.
4. If `currentAltitude` is greater than `highestAltitude`, update it.
5. After the loop, return `highestAltitude`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Array Traversal
- Running Sum (Prefix Sum)
- Maintaining Maximum Value
- Iterative Problem Solving

---

## Learning Notes

Today I learned how to use a running sum to track values while traversing an array. Instead of storing every altitude, we only keep track of the current altitude and the maximum altitude reached, making the solution efficient with constant extra space.

---

## Status

✅ Solved
