# Day 4

## Problem

**Check If N and Its Double Exist**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Linear Search, Basic Comparison

---

## Approach

- Traverse the array and compare each element with every other element.
- Check whether one number is double the value of another while ensuring they are at different indices.
- If such a pair exists, return `true`.
- If no valid pair is found after checking all elements, return `false`.

---

## Algorithm

1. Iterate through each element in the array.
2. For each element, compare it with every other element.
3. Ensure the indices are different.
4. If `arr[i] == 2 * arr[j]`, return `true`.
5. If the entire array is checked without finding a valid pair, return `false`.

---

## Complexity Analysis

- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Array Traversal
- Nested Loops
- Linear Search
- Element Comparison
- Boolean Logic

---

## Learning Notes

Today I learned how to compare every pair of elements in an array using nested loops. This problem reinforced the importance of checking conditions carefully, avoiding comparisons with the same index, and understanding the trade-off between a simple brute-force solution and more optimized approaches.

---

## Status

✅ Solved
