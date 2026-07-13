# Day 7

## Problem

**Largest Number At Least Twice of Others**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Finding Maximum, Linear Scan, Conditional Logic

---

## Approach

- Traverse the array to find the largest element and its index.
- Traverse the array again to verify whether the largest element is at least twice every other element.
- Ignore the comparison with the largest element itself.
- If any element violates the condition, return `-1`.
- Otherwise, return the index of the largest element.

---

## Algorithm

1. Initialize `largest` and `index`.
2. Traverse the array to find the maximum element and its index.
3. Traverse the array again.
4. Skip the largest element's index.
5. If any element satisfies `nums[i] * 2 > largest`, return `-1`.
6. If all elements satisfy the condition, return the stored index.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Linear Array Traversal
- Finding the Maximum Element
- Tracking Element Index
- Conditional Comparisons
- Multi-Pass Algorithms

---

## Learning Notes

Today I learned how to solve a problem by performing multiple linear scans over an array. The first scan identifies the largest element, while the second verifies whether it satisfies the required condition against every other element. This problem strengthened my understanding of finding maximum values, tracking indices, and validating conditions efficiently without using extra space.

---

## Status

✅ Solved
