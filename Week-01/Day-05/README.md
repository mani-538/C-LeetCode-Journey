# Day 5

## Problem

**Search Insert Position**

- **Difficulty:** 🟢 Easy
- **Topics:** Array Search, Linear Search, Index Positioning

---

## Approach

- Traverse the array from the beginning.
- If the target element is found, return its index.
- If the current element becomes greater than the target, return the current index since that's where the target should be inserted.
- If the traversal finishes without finding a larger element, insert the target at the end of the array.

---

## Algorithm

1. Iterate through the array.
2. If `nums[i] == target`, return `i`.
3. If `nums[i] > target`, return `i`.
4. After checking all elements, return `numsSize` (insert at the end).

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

> **Note:** Although LeetCode expects an `O(log n)` solution using Binary Search, this implementation uses a straightforward **Linear Search** approach, making it ideal for beginners learning array traversal.

---

## Concepts Learned

- Linear Search
- Array Traversal
- Conditional Statements
- Index Positioning
- Basic Problem Solving

---

## Learning Notes

Today I learned how to determine the correct position of an element in a sorted array. This problem helped me understand that a solution can either find an existing element or identify the appropriate insertion point while maintaining the array's sorted order. It also introduced the idea that some problems have both a simple approach and a more optimized solution.

---

## Status

✅ Solved
