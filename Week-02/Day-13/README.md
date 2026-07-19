# Day 13

## Problem

**Binary Search**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Binary Search, Divide and Conquer

---

## Approach

- Since the array is sorted, use the Binary Search algorithm instead of checking every element.
- Maintain two pointers: one at the beginning (`left`) and one at the end (`right`) of the array.
- Find the middle element and compare it with the target.
- If the target is found, return its index.
- If the target is smaller, continue searching in the left half.
- If the target is larger, continue searching in the right half.
- Repeat until the target is found or the search space becomes empty.

---

## Algorithm

1. Initialize:
   - `left = 0`
   - `right = numsSize - 1`

2. While `left <= right`:
   - Calculate `mid = left + (right - left) / 2`.
   - If `nums[mid] == target`, return `mid`.
   - If `nums[mid] < target`, move `left = mid + 1`.
   - Otherwise, move `right = mid - 1`.

3. If the loop ends without finding the target, return `-1`.

---

## Complexity Analysis

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Binary Search
- Divide and Conquer
- Searching in Sorted Arrays
- Pointer Manipulation
- Efficient Search Algorithms

---

## Learning Notes

Today I learned how Binary Search significantly improves search efficiency by repeatedly dividing the search space in half. Unlike Linear Search, which checks each element one by one, Binary Search works only on sorted arrays and quickly locates the target using two pointers and a middle index. This problem introduced one of the most fundamental and frequently used algorithms in computer science.

---

## Status

✅ Solved
