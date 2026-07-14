# Day 8

## Problem

**Remove Element**

- **Difficulty:** 🟢 Easy
- **Topics:** Arrays, Linear Scan, In-Place Array Modification, Two Variables (Foundation for Two Pointers)

---

## Approach

- Use a variable to track the position where the next valid element should be placed.
- Traverse the array from left to right.
- If the current element is **not equal** to the target value, copy it to the tracked position and move the position forward.
- Ignore elements equal to the target value.
- After processing all elements, return the count of valid elements.

---

## Algorithm

1. Initialize `index = 0`.
2. Traverse the array.
3. If `nums[i] != val`:
   - Assign `nums[index] = nums[i]`.
   - Increment `index`.

4. Continue until all elements are processed.
5. Return `index` as the new length of the array.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Learned

- Linear Array Traversal
- In-Place Array Modification
- Using Two Variables
- Filtering Elements
- Foundation of the Two-Pointer Technique

---

## Learning Notes

Today I learned how to modify an array in place without using additional memory. By maintaining a separate index for valid elements, I can efficiently overwrite unwanted values while preserving the required elements. This problem introduced the core idea behind the Two-Pointer technique, which is commonly used in many array and string problems.

---

## Status

✅ Solved
