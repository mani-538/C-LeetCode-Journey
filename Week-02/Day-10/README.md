# Day 10

## Problem

**Move Zeroes**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Two Variables (Foundation for Two Pointers), In-Place Array Modification, Array Traversal

---

## Approach

- Use one variable to track the position where the next non-zero element should be placed.
- Traverse the array from left to right.
- Whenever a non-zero element is found, swap it with the element at the tracked position.
- Increment the tracked position after each successful placement.
- By the end of the traversal, all non-zero elements are grouped at the beginning while all zeroes naturally move to the end.

---

## Algorithm

1. Initialize `index = 0`.
2. Traverse the array.
3. If `nums[i]` is not `0`:
   - Swap `nums[index]` and `nums[i]`.
   - Increment `index`.

4. Continue until all elements are processed.
5. The array is modified in place with all zeroes moved to the end.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Array Traversal
- In-Place Array Modification
- Two Variables
- Element Swapping
- Foundation of the Two-Pointer Technique

---

## Learning Notes

Today I learned how to rearrange elements within an array without using extra memory. By tracking the position of the next non-zero element and swapping values when needed, I can move all zeroes to the end while preserving the relative order of the non-zero elements. This problem strengthened my understanding of in-place algorithms and reinforced the fundamentals of the Two-Pointer technique.

---

## Status

✅ Solved
