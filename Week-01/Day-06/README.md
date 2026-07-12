# Day 6

## Problem

**Maximum Product of Two Elements in an Array**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Finding Maximum, Brute Force

---

## Approach

- Compare every pair of elements in the array using nested loops.
- Ensure the two elements are at different indices.
- For each valid pair, calculate `(nums[i] - 1) * (nums[j] - 1)`.
- Keep track of the maximum product found.
- Return the maximum product after checking all possible pairs.

---

## Algorithm

1. Initialize `maximumProduct` to `0`.
2. Traverse the array using two nested loops.
3. Skip comparisons where both indices are the same.
4. Compute `(nums[i] - 1) * (nums[j] - 1)` for each valid pair.
5. Update `maximumProduct` if a larger product is found.
6. Return `maximumProduct`.

---

## Complexity Analysis

- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)`

> **Note:** This solution uses a brute-force approach by checking every possible pair. A more optimized solution can solve the problem in `O(n)` by finding the two largest elements in a single traversal.

---

## Concepts Learned

- Nested Loops
- Brute Force Technique
- Pair Comparison
- Finding the Maximum Value
- Array Traversal

---

## Learning Notes

Today I learned how to compare every possible pair of elements in an array to find the maximum product. This problem reinforced the brute-force approach and showed that while it is easy to understand and implement, some problems can later be optimized by reducing unnecessary comparisons.

---

## Status

✅ Solved
