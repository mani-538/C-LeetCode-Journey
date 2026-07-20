# Day 14

## Problem

**Find First and Last Position of Element in Sorted Array**

- **Difficulty:** 🟡 Medium
- **Topics:** Arrays, Binary Search, Divide and Conquer

---

## Approach

- Since the array is sorted, use Binary Search to efficiently locate the target.
- Perform the first Binary Search to find the **first occurrence** of the target.
- Perform the second Binary Search to find the **last occurrence** of the target.
- If the target is not found, return `[-1, -1]`.
- Otherwise, return the indices of the first and last occurrences.

---

## Algorithm

1. Initialize the answer as `[-1, -1]`.
2. Perform a Binary Search to find the first occurrence of the target.
3. Perform another Binary Search to find the last occurrence of the target.
4. Store both indices in the result array.
5. Return the result.

---

## Complexity Analysis

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Binary Search
- Modified Binary Search
- Finding First Occurrence
- Finding Last Occurrence
- Divide and Conquer
- Searching in Sorted Arrays

---

## Learning Notes

Today I learned how Binary Search can be modified to solve more than simple search problems. Instead of stopping when the target is found, I continued searching toward the left to find the first occurrence and toward the right to find the last occurrence. This problem demonstrated how a classic algorithm can be adapted to solve more advanced searching tasks efficiently.

---

## Status

✅ Solved
